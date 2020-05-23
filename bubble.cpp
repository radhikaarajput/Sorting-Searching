/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include <iostream>
#include<conio.h>
using namespace std;
int bubble(int A[], int n);
int main() {
	
    int A[]={2,7,8,9,90};
    int n=5;
    bubble(A,n);
    cout<<"sorted array";
    for(int i=0;i<n;i++)
    {
        cout<<A[i];
        cout<<"\n";
    }
    getch();
    return 0;
}

int bubble(int A[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        int flag=0;
        for(int k=0; k<n-i-1;k++)
        {
            if(A[k]>A[k+1])
            {
                int temp=A[k];
                A[k]=A[k+1];
                A[k+1]=temp;
                flag=1;
            }
        }
        if(flag==0)
        {
            cout<<"already sorted";
            break;
        }
    }
    return 0;
}

