#include<bits/stdc++.h>
using namespace std;

int dp[1001][1001];

int sum(int a[],int start,int end)
{
	int total=0;
	
	for(int i=start;i<=end;i++)
	{
		total+=a[i];
	}
	return total;
}

int solve(int a[],int n,int k)
{
	
	if(k==1)
	return sum(a,0,n-1);
	
	if(n==1)
	return a[0];
	
	if(dp[n][k]!=-1)
	return dp[n][k];
	
	int best=INT_MAX;
	for(int i=1;i<=n;i++)
	{
		best=min(best,max(solve(a,i,k-1),sum(a,i,n-1)));
	}
	return dp[n][k]=best;
}

int main()
{
	
	int a[]={10,20,60,50,30,40};
	
	int n=sizeof(a)/sizeof(a[0]);
	
	int k=3;
	
	memset(dp,-1,sizeof(dp));
	
	int ans=solve(a,n,k);
	
	cout<<ans;
	
	
}
