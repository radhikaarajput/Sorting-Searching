#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n,i,j,t,max=0,k,sum=0;
	int *a=new int[n];
	cout<<"Enter size";
	cin>>n;
	cout<<"Element";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		
	}
	
	cout<<"Degree";
	cin>>k;
	
	for(t=0;t<k;t++)
	{
			for(i=n-1;i>=0;i--)
			{
				
				if(i== n-1)
				{
					j=a[i];
					a[i]=a[i-1];
				}
					
				else if(i==0)
				{
					a[i]=j;
				}	
					
				else
				{
					a[i]=a[i-1];
					
				}
			
        	}
	
	}
	
	for(i=0;i<7;i++)
	{
		cout<<a[i];
		
	}
	
	getch();
	return 0;
}
