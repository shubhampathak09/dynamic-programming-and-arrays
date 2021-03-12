// TSP problem
// np hard using bitmasks
#include<bits/stdc++.h>
using namespace std;

int cost[21][21];

int dp[21][21];

solve(int i,int mask,int n)
{
	
	
	if(n==0)
	{
		return cost[i][1];
	}
	
	if(dp[i][mask]!=-1)
	return dp[i][mask];
	
	int ans=INT_MAX;
	for(int j=0;j<n;j++)
	{
		if(j!=i&&(mask&(1<<j)))
		{
			ans=min(ans,cost[i][j]+solve(j,mask^(1<<j),n--));
		}
	}
	return dp[i][mask]=ans;
}

int man()
{
	
	memset(dp,-1,sizeof(dp));
	
	
	// test for cost matrix
	
	cout<<solve(1,(1<<n),n-1);
}
