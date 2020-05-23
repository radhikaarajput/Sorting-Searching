#include<iostream>
using namespace std;
int rotation(int a[], int k , int n);
int main()
{
    int n,i,j,k,t;
    int *a=new int[n];
    
    cin>>n;
    
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        
    }
    
    cin>>k;
    
    rotation(a,k,n);
    

    for(i=0;i<n;i++)
    {
        cout<<a[i];
        cout<<"\n";
        
    }
    
    return 0;
}

int rotation(int a[], int k , int n)
{
    int i,j,t;
    
     for(t=0;t<=k;t++)
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
    
    return 0;
}
