#include <iostream>
using namespace std;

int insertion(int A[], int n);

int main()
{
    int n;
    int *A= new int[n];
    cout<<"enter size of array \n";
    cin>>n;
    cout<<"Enter elements \n";
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    insertion(A,n);
    cout<<"Sorted array \n";
    for(int i=0;i<n;i++)
    {
        cout<<A[i];
        cout<<"\n";
    }

    return 0;
}

int insertion(int A[], int n)
{
    for(int i=0;i<n;i++)
    {
       int val=A[i];
       int hole=i;
       
       while(hole>0 && A[hole-1]>val)
       {
           A[hole]=A[hole-1];
           hole--;
       }
       
       A[hole]=val;
    }
    return 0;
}