// isort
#include<bits/stdc++.h>
using namespace std;

void isort(int a[],int n)
{
	
	for(int i=1;i<n;i++)
	{
		int key=a[i];
		int j=i-1;
		while(j>=0&&a[j]>key)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=key;
	}
	
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	
}

int main()
{
	
	int a[]={3,1,2,6,0,9,104,89,3,2,1};
	
	int n=sizeof(a)/sizeof(a[0]);
	
	
	isort(a,n);
	
}
