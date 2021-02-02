// find max in array

#include<bits/stdc++.h>
using namespace std;

void findmaxmin(int a[],int n)
{
	
	int mx=INT_MIN;
	int mn=INT_MAX;
	
	for(int i=0;i<n;i++)
	{
		if(a[i]>mx)
		{
			mx=a[i];
		}
		
	}
	
	for(int i=0;i<n;i++)
	{
		if(a[i]<mn)
		{
			mn=a[i];
		}
	}
	
	cout<<mx<<" "<<mn;
	
	return;
}

int main()
{
	
int a[]={3,4,1,5,6,78,9,12,9,34};	

int n=sizeof(a)/sizeof(a[0]);
	
findmaxmin(a,n);	
	
}
