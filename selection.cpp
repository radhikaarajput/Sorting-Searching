/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<iostream>
using namespace std;
int selection(int A[], int n);

int main()
{
    int A[]={2,39,6,11,9};
    int n=5;
    selection(A,n);
    for(int i=0;i<n;i++)
    {
        cout<<A[i];
        cout<<"\n";
    }

    return 0;
}

int selection(int A[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(A[j]<A[min])
            {
                min=j;
            }
        }
        
        int temp=A[min];
        A[min]=A[i];
        A[i]=temp;
    }
    
    return 0;
}
