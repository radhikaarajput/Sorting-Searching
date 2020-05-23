#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int n,i,j,last,k;
    int *A = new int[n];
    cout<<"Array size";
    cin>>n;
    cout<<"degree";
    cin>>k;
    
    for(i=0;i<n;i++)
    {
        cin>>A[i];
    }
    
     for(i=0;i<k;i++)
    {
        last = A[n - 1];
    
        for(j=n-1; j>0; j--)
        {
            A[j] = A[j- 1];
        }
        A[0] = last;
    }
   cout<<"Roatated";
    
    for(i=0;i<n;i++)
    {
        cout<<A[i];
        cout<<"\n";
    }
    
    getch();
    return 0;
}    
