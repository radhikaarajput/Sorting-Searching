#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int InterploationSearch(int A[],int find,int length );
int main()
{
	int n,find,i,pos=0;
	cout<<"Enter size of the array";
	cin>>n;
	int A[n];
	cout<<"Enter elements of array";
	for(i=0;i<n;i++)
	{
		cin>>A[i];
	}
	cout<<"Enter element to search";
	cin>>find;
	 pos=  InterploationSearch(A,find,n);
	if(pos == -1)
		cout<<"Not found";
	else
		cout<<"Found at"<<pos+1;	
	getch();
	return 0;
}

int InterploationSearch(int A[],int find,int length )
{
	int i,pos;
	int left=0; 
	int right= length;   
	while(right>left && find>=A[left] && find <=A[right])
	{ 
			if(left == right)             //one element
			{
				if(A[left]==find)         
					return left;
				else
					return -1;	
			}
			
		pos= left+( (find-A[left]) / (A[right]-A[left]) )*(right-left);
		//	pos = left + (((double)(right - left) / (A[right] - A[left])) * (find - A[left])); 
	  
			
			if(A[pos]==find)
				return pos;
			if(A[pos]>find)	
				right=pos-1;
			else if	(A[pos]<find)
				left=pos+1;
	}
	
	return -1;
}
