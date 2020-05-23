#include<iostream>
#include<conio.h>
using namespace std;
int heapsort(int A[], int n);                             //n no of elements in heap
int heapify(int A[], int n ,int i);                       //i postion from which we want to call heapify as we donot want to heapify leafs
int main()
{
	int n,i;
	int *A= new int[n];
	cout<<"Enter the no of elements you want in heap \n";
	cin>>n;
	cout<<"Enter elements \n";
	for(i=0;i<n;i++)
	{
		cin>>A[i];
	}
	heapsort(A,n);
	cout<<"Sorted";
	for(i=0;i<n;i++)
	{
		cout<<A[i];
	}
	
	getch();
	return 0;
}

int heapsort(int A[], int n)
{
	int i,temp;
	for(i=n/2 ;i>1; i--)                          //buliding heapify
	{
		heapify(A,n,i);
	}
	
	for(i=n;i>=1;i--)
	{
		temp=A[1];                         //deletion is done from parent so we are replaing parent with the last node 
		A[1]=A[i];
		A[i]=temp;
		
		heapify(A,n,1);                    //after deletion we have to heapify again as the parent is not same now
	}
	
	return 0;
}

int heapify(int A[], int n, int i)
{
	
	int largest =i;                             //considering largest as element from which we want to start heapifying
	int l= (2*i);                              //left child
	int r= (2*i)+1;                             //right child
	int temp;
	
	while((l<=n) && (A[l]>largest))
	{
		largest=l;
	}
	while(r<=n && A[r]>largest)
	{
		largest=r;
	}
	
	if(largest != i)                           //largest changed so swap largest with parent node (i) 
	{
		temp=A[largest];
		A[largest]=A[i];
		A[i]=temp;
		
		heapify(A,n,largest);                //in case the largest's child have greater value	
	}
	return 0;
}
