//Allocate min number of pages

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

int solve(int pages[],int n,int m)
{
	
	if(n==1)
	{
		return pages[0];
	}
	
	if(m==1)
	{
		return sum(pages,0,n-1);
	}
	
	if(dp[n][m]!=-1)
	return dp[n][m];
	
	int best=INT_MAX;
	
	for(int i=1;i<=n;i++)
	{
		best=min(best,max(solve(pages,i,m-1),sum(pages,i,n-1)));
	}
	
	return dp[n][m]=best;
}


int main()
{
	
	memset(dp,-1,sizeof(dp));
	
	int pages[]={12,34,67,90};
	
	int n=sizeof(pages)/sizeof(pages[0]);
	
	int m=2;
	
	int ans=solve(pages,n,m);
	
	
	cout<<ans;
	
	
}
