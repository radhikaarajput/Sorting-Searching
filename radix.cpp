/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
int count(int A[], int n , int pos);
int radix(int A[], int n);

int main()
{
    int n,i;
    int A[n];
    cout<<"Enter size of array \n";
    cin>>n;
    cout<<"Enter elements \n";
    for(i=0;i<n;i++)
    {
        cin>>A[i];
    }
    radix(A,n);
    cout<<"Sorted Array \n";
    for(int i=0;i<n;i++)
    {
        cout<<A[i];
    }

    return 0;
}

int radix(int A[], int n)
{
    int i, max=0;
    for(i=0;i<n;i++)
    {
        if(A[i]>max)
        {
            max=A[i];
        }
    }
    
    for(int exp=1; max/exp >0; exp=exp*10)
    {
        count(A,n,exp);
    }
    return 0;
}

int count(int A[], int n, int pos)
{
    int count[10]={0};
    int out[n];
    int i;
    
    for(i=0;i<n;i++)             //marking count array for each pass
    {
        ++count[(A[i]/pos)%10];
    }
    
    for(i=1;i<n;i++)           //updating count
    {
        count[i]=count[i]+count[i-1];
    }
    
    for(i=n-1;i>=0;i++)          //filling output array with help of count array for every pass
    {
        out[--count[(A[i]/pos)%10]]=A[i];
    }
    
    for(i=0;i<n;i++)
    {
        A[i]=out[i];
    }
    return 0;
}