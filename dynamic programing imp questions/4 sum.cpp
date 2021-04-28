#include<bits/stdc++.h>
using namespace std;

void solve()
{
	
	int a[]={3,5,9,8,7};
	
	int n=sizeof(a)/sizeof(a[0]);
	
	map<int,pair<int,int>>mp;
	
	int sum=23;
	
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			mp[a[i]+a[j]]={i,j};
		}
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(mp.find(sum-(a[i]+a[j]))!=mp.end())
			{
				if(i!=mp[sum-(a[i]+a[j])].first&&j!=mp[sum-(a[i]+a[j])].second)
				cout<<a[i]<<" "<<a[j]<<" "<<a[mp[sum-(a[i]+a[j])].first]<<" "<<a[mp[sum-(a[i]+a[j])].second];
				//cout<<endl;
				return;
			}
		}
	}
	
}

int main()
{
	
	solve();
	
}
