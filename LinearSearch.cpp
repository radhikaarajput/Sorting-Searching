#include<iostream>
#include<conio.h>
using namespace std;
int LinearSearch(int A[],int find,int n );
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
	cin>>n;
	for(i=0;i<n;i++)
	{
		if(A[i]== find)
		{
			pos= i+1;
		}
	}
	//int pos= LinearSearch(A,find,n);
	if(pos == 0)
		cout<<"Not found";
	else
		cout<<"Found at"<<pos;	
	getch();
	return 0;
}

/*int LinearSearch(int A[],int find,int n )
{
	int i;
	for(i=0;i<n;i++)
	{
		if(A[i]== find)
		{
			return i+1;
		}
	}
	return 0;
}
*/
