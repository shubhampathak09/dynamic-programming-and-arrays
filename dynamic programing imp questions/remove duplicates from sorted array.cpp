#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	
	int a[]={1,2,2,3,3,4,4,4,5};
	
	int n=sizeof(a)/sizeof(a[0]);
	
	int j=0;
	
	
	for(int i=0;i<n;i++)
	{
		if(a[i]!=a[i+1])
		{
			a[j]=a[i];
			j++;
		}
	}
	
	a[j]=a[n-1];
	
//	cout<<j;
	
	for(int i=0;i<j;i++)
	{
		cout<<a[i];
	}


// in constant space 	
}
