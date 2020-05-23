#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int JumpSearch(int A[],int find,int length );
int main()
{
	int n,find,i,pos=0;
	cout<<"Enter size of the array ";
	cin>>n;
	
	int A[n];
	
	cout<<"Enter elements of array ";
	for(i=0;i<n;i++)
	{
		cin>>A[i];
	}
	
	cout<<"Enter element to search ";
	cin>>find;
	
	pos= JumpSearch(A,find,n);
	 
	if(pos == -1)
		cout<<"Not found";
	else
		cout<<"Found at"<<pos;
			
	getch();
	return 0;
}

int JumpSearch(int A[],int find,int length )
{
	int i;
	int left=0;
	int right= sqrt(length);   //block size find out
	while(A[right]<=find && right<length)
	{  //assuming not present in this block so shifting left right to new block
		left= right;
		right+= sqrt(length);        //it might exceed so adjust this
		
		if(right>length-1)    //lastblock as in case it has less elements than blocksize
			right= length;
	}
	//elemnt is present in this block now so do linear search in this block
	for(i= left;i<right; i++)
	{
		if(A[i]==find)
		{
			return i;
	    }	
	}
	return -1;
}
