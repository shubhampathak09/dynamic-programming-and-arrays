//
//record breaking day  //google kickstart problem

#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	int a[]={4,8,15,16,23,42};
	
	int n=sizeof(a)/sizeof(a[0]);
	
	
	int mx=a[0];
	int ct=0;
	
	for(int i=0;i<=n-1;i++)
	
	{
		if(i==0)
		{
			if(a[i+1]<a[i])
			{
				ct++;
				
			}
		}
		
		else if(i!=n-1)
		{
			if(a[i]>mx)
			{
				mx=a[i];
				if(a[i+1]<a[i])
				ct++;
			}
		}
		else
		{
			if(a[i]>mx)
			{
				ct++;
				mx=a[i];
			}
		}
	}
	
	cout<<ct;
}
