// min cost path in grid 

// to reach a cell m,n from 0,0

#include<bits/stdc++.h>
using namespace std;

#define m 3
#define n 3

int mincostpath(int grid[n][m])
{
	
	 
	int dp[n][m];
	
	dp[0][0]=grid[0][0];
	
	// filing the 0th row
	
	for(int i=1;i<n;i++)
	{
		dp[i][0]=grid[i][0]+dp[i-1][0];
	}
	for(int i=1;i<m;i++)
	{
		dp[0][i]=grid[0][i]+dp[0][i-1];
	}
	for(int i=1;i<n;i++)
	{
		for(int j=1;j<m;j++)
		{
			dp[i][j]=grid[i][j]+min(dp[i-1][j],dp[i][j-1]);
		}
	}
	return dp[n-1][m-1];
}

int main()
{
	
	int cost[m][n] = { { 1, 2, 3 }, 
                       { 4, 8, 2 }, 
                       { 1, 5, 3 } };
	
	
	cout<<mincostpath(cost);
	
	//cout<<"hi";
}
