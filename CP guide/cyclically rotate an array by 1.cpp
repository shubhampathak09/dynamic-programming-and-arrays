// cyclically rotate an array by 1

#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	
	int a[]={1,2,3,4,5,6};
	
	int n=sizeof(a)/sizeof(a[0]);
    
    
    for(int i=0;i<n;i++)
    {
    	cout<<a[i]<<" ";
	}
	cout<<endl;
    
	int x=a[n-1]; 	
	for(int i=n-1;i>=1;i--)
	{
		a[i]=a[i-1];
	}
	a[0]=x;
	
  for(int i=0;i<n;i++)
  {
  	cout<<a[i]<<" ";
  }
}
