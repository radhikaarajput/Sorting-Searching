#include<iostream>
#include<conio.h>
using namespace std;
int Quicksort(int A[], int lb,int ub );
int partition(int A[],int lb, int ub);
int main()
{
	int i,n;
	int *A=new int[n];
	cout<<"Enter size of array \n";
	cin>>n;
	cout<<"Enter elements of array \n";
	for(i=0;i<n;i++)
	{
		cin>>A[i];
	
   }
   Quicksort(A,0,n-1);
   cout<<"Sorted Array";
   for(i=0;i<n;i++)
   {
		cout<<A[i];
		cout<<"\n";
	}
	getch();
	return 0;
}

int Quicksort(int A[], int lb,int ub )
{
	if(lb<ub)
	{
		int part=partition(A,lb,ub);
		Quicksort(A,lb,part-1);
		Quicksort(A,part+1,ub);
	}
	return 0;
}

int partition(int A[], int lb, int ub)
{
	int pivot=A[lb],temp;   // chosing last element as pivot
	int start=lb;
	int end=ub;
	while(start<end)
	{
		while(A[start]<=pivot)
		{
			start++;
		}
		while(A[end]>pivot)
		{
			end--;
		}
		if(start<end)
		{
				temp=A[start];
				A[start]=A[end];
				A[end]=temp;
		}
		temp=A[lb];
		A[lb]=A[end];
		A[end]=temp;
	}
	
	return end;
}
