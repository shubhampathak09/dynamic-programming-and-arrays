
#include<bits/stdc++.h>
using namespace std;

int solve(int a[],int n,int k)
{
	
	int dp[n+1][k+1];
	
	for(int i=0;i<=n;i++)
	{
		dp[i][0]=0;
		 
	}
	for(int i=0;i<=k;i++)
	{
		dp[0][i]=0;
	}
	
	for(int i=1;i<=n;i++)
	{
		dp[i][1]=sum(a,i);
	}
	for(int i=1;i<=k;i++)
	{
		dp[1][i]=a[0];
	}
	
	for(int i=2;i<=n;i++)
	{
		for(int j=2;j<=k;j++)
		{
			int best=INT_MAX;
			best=min(dp[i-1])
		}
	}
}

int main()
{
	
	
	
}// fml
