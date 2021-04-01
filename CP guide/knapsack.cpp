#include<bits/stdc++.h>
using namespace std;

int dp[101][101];

int solve(int wt[],int val[],int W,int n)
{
	
	if(W==0||n==0)
	return 0;
	
	if(dp[n][W]!=-1)
	return dp[n][W];
	
	if(wt[n-1]<=W)
	{
		
		return dp[n][W]=max(val[n-1]+solve(wt,val,W-wt[n-1],n-1),solve(wt,val,W,n-1));
	}
	else
	return dp[n][W]=solve(wt,val,W,n-1);
}

int main()
{
	
	memset(dp,-1,sizeof(dp));
	
	
	// execute here
	// memoised code
}
