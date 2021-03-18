// frequency sort  using heaps max maybe

#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	
    int a[]={1,2,2,2,1,1,1,1,3,3,3,3,3,3,3,4};
	
	int n=sizeof(a)/sizeof(a[0]);
	
	map<int,int>mp;
		
	priority_queue<pair<int,int>>pq;
	
	for(int i=0;i<n;i++)
	mp[a[i]]++;
	
	for(auto it=mp.begin();it!=mp.end();it++)
	{
		pq.push({it->second,it->first});
	}
	
	vector<int>result;
	
	while(!pq.empty())
	{
		auto u=pq.top();  //{3,1}
		for(int i=0;i<u.first;i++)
		{
			result.push_back(u.second);
		}
		pq.pop();
	}
	
	for(auto x:result)
	cout<<x<<" ";
}
