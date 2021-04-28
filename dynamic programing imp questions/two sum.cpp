#include<bits/stdc++.h>
using namespace std;


int main()
{
	
	int a[]={0,-1,2,-3,1};
	
	int n=sizeof(a)/sizeof(a[0]);
	
	
	
	map<int,int>mp;
	
	int sum=-2;
	int first=-1;
	int second=-1;
	for(int i=0;i<n;i++)
	{
		if(mp.find(sum-a[i])!=mp.end())
		{
			 first=a[i];
			 second=a[mp[sum-a[i]]];
		}
		mp[a[i]]=i;
	}
	
	cout<<first<<" "<<second; // cool
	
}
