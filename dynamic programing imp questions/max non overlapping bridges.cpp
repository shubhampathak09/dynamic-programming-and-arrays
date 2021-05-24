#include<bits/stdc++.h>
using namespace std;

bool comp(pair<int,int>&p1,pair<int,int>&p2)
{
	if(p1.first!=p2.first)
	return p1.first<p2.first;
	else
	return  p1.second<p2.second;
}

int maxoverlap(vector<pair<int,int>>cities)
{
	
	int n=cities.size();
	
	int ovmax=0;
	sort(cities.begin(),cities.end(),comp);
	int dp[n];
	
    for(int i=0;i<n;i++)
    {
    	
    	int mx=0;
    	
    	for(int j=0;j<i;j++)
    	{
    		if(cities[j].second<=cities[i].second)
    		{
    			if(dp[j]>mx)
    			{
    				mx=dp[j];
				}
			}
		}
    	dp[i]=mx+1;
    	if(dp[i]>ovmax)
    	ovmax=dp[i];
	}
	
	return ovmax;
}


int main()
{
	
	
  vector<pair<int,int>>cities={{8,1},{1,2},{4,3},{3,4},{5,5},{2,6},{6,7},{7,8}};
  
  int ans=maxoverlap(cities);
	
	
	cout<<ans;
	
}
