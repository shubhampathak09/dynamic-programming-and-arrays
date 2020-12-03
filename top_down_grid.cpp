// total total minimum cost

#include<bits/stdc++.h>
using namespace std;

#define N 4
#define M 4

int min_grid(int graph[N][M])
{
	
	int dp[N+1][M+1];
	
	dp[0][0]=graph[0][0];
	
	for(int i=1;i<=N;i++)
	dp[0][i]=dp[0][i-1]+graph[0][i];
	
	for(int j=1;j<=M;j++)
	dp[j][0]=dp[j-1][0]+graph[j][0];
	
	for(int i=1;i<=N;i++)
	{
		for(int j=1;j<=M;j++)
		{
			
			dp[i][j]=graph[i][j]+min(dp[i-1][j],dp[i][j-1]);
		}
	}
	
	return dp[N][M];
}

int main()
{
	
	int grid[N][M]={{5,1,2,6},{9,9,7,5},{3,1,4,8}};
	
	cout<<min_grid(grid);
}
