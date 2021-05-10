// cyclic shift the array elements by 1
#include<bits/stdc++.h>
using namespace std;


int main()
{
	
	
	int a[]={1,2,5,1,0,9};
	
//	cout<<endl;
	
	int n=sizeof(a)/sizeof(a[0]);
	
	
	
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	
	cout<<endl;
	int temp=a[n-1];
	
	for(int i=n-1;i>=1;i--)
	{
		a[i]=a[i-1];
	}
	a[0]=temp;
	
	
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
