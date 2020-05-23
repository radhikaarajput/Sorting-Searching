#include<iostream>
#include<conio.h>
using namespace std;
int mergesort(int A[], int s,int e);                      //s=start, e= end
int merge(int A[],int s, int e, int mid);

int main()
{
	int i,n,s;
	int *A=new int[n];
	cout<<"Enter size of array";
	cin>>n;
	cout<<"Enter elements";
	for(i=0;i<n;i++)
	{
		cin>>A[i];
    }
    
    
    
	mergesort(A,0,n-1);
	cout<<"Sorted array \n";
	for(i=0;i<n;i++)
	{
		cout<<A[i];
		cout<<"\n";
	}
	getch();
	return 0;
}


int mergesort(int A[],int s, int e)
{
	if(s<e)     //only one element window
	{
	int mid=(s+(e-1))/2;
	mergesort(A,s,mid);
	mergesort(A,mid+1,e);
	merge(A,s,e,mid);
	
    }
	return 0;
}

int merge(int A[],int s, int e, int mid)
{
	int i,j,k;
	int n1=mid-s+1;     //size of temporary array 1;
	int n2=e-mid;         //size of temp array 2;
	int *l=new int[n1];            //two temp array l,r 
	int *r=new int[n2];          
	
	//copy data from main  array A to temp array l and r or comparisions
	for(i=0;i<n1;i++)
	{
		l[i]=A[i];
	}
	for(i=0;i<n2;i++)             //elements after mid
	{
		r[i]=A[mid+1+i];
	}
	while(i<=n1 && j<=n2)
	{
		if(A[i]<=A[j])	
		{
			A[k++]=l[i++];
		}
		else
		{
			A[k++]=r[j++];
	    }	
	}
	
	while(i<=mid)
	{
		A[k++]=l[i++];
	}
	while(j<=e)
	{
		A[k++]==r[j++];
	}
	
	return 0;
}
