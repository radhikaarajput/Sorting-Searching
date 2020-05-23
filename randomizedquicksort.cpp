#include<iostream>
#include<conio.h>
#include<ctime>
#include<cstdlib>
using namespace std;
int RandomQuicksort(int A[], int lb,int ub );
int partition(int A[],int lb, int ub);
int shuffle(int A[], int s ,int e);
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
   shuffle(A,0,n-1);
   cout<<"Elements after shuffling";
   for(i=0;i<n;i++)
   {
		cout<<A[i];
		cout<<"\n";
	}
   RandomQuicksort(A,0,n-1);
   
   cout<<"Sorted Array \n";
   for(i=0;i<n;i++)
   {
		cout<<A[i];
		cout<<"\n";
	}
	getch();
	return 0;
}

int shuffle(int A[], int s,int e)
{
	srand(time(NULL));
	int i,j,temp;
	for(i=e;i>0;i--)
	{
		j=rand()%(i+1);
		temp=A[i];
		A[i]=A[j];
		A[j]=temp;
	}
}

int RandomQuicksort(int A[], int lb,int ub )
{
	
	if(lb<ub)
	{
		int part=partition(A,lb,ub);
		RandomQuicksort(A,lb,part-1);
		RandomQuicksort(A,part+1,ub);
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
