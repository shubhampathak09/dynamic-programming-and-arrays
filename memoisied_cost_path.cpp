
#include<bits/stdc++.h>
using namespace std;

#define N 3

int min_cost(int m,int n,int grid[N][N])
{
	
	int dp[m+1][n+1];
	
	dp[0][0]=grid[0][0];
	
	for(int i=1;i<=m;i++)
	dp[0][i]=grid[0][i]+dp[0][i-1];
	
	for(int i=1;i<=n;i++)
	dp[i][0]=dp[i-1][0]+grid[i][0];
	
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			dp[i][j]=grid[i][j]+min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1]));
		}
	}
	return dp[m][n];
}

int main()
{
	
	int grid[N][N]={{1,2,3},{4,8,2},{1,5,3}};
	
	cout<<min_cost(2,2,grid);
	
	
}
