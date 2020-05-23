/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
int radix(int A[], int n);

int main()
{
    int n,i;
    int A[n];
    cout<<"Enter size \n";
    cin>>n;
    cout<<"enter elements \n";
    for(i=0;i<n;i++)
    {
        cin>>A[i];
    }
    radix(A,n);
    cout<<"Sorted array \n";
    for(i=0;i<n;i++)
    {
        cout<<A[i];
        cout<<"\n";
    }
    return 0;
}

int radix(int A[], int n)
{
    int k,i,max=0;
    int out[n];
    for(int i=0;i<n;i++)
    {
        if(A[i]>max)
        {
            max=A[i];
        }
    }
    
    k=max;
    int count[k]={0};        //create count array of length= max element
    for(i=0;i<n;i++)
    {
        count[A[i]]++;
    }
    
    for(i=1;i<=k;i++)    //update count, start from 1 as first element is as it is
    {
        count[i]=count[i]+count[i-1];
    }
    
    for(i=n-1;i>=0;i--)   //to put elments in out using their count
    {
        out[--count[A[i]]] = A[i];
    }
    
    for(i=0;i<n;i++)
    {
        A[i]=out[i];
    }
    return 0;
}
