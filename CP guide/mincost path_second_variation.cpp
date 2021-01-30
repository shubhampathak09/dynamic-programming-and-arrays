// min cost path move possible in 8 directions

// traverse right left or diagonally downward only

#include<bits/stdc++.h>
using namespace std;

#define n 3
#define m 3



int mincost(int grid[n][m])
{

int dp[n][m];

dp[0][0]=grid[0][0];

for(int i=1;i<m;i++)
{
	dp[0][i]=grid[0][i]+dp[0][i-1];
}

for(int j=1;j<n;j++)
{
	dp[j][0]=grid[j][0]+dp[j-1][0];
}

for(int i=1;i<n;i++)
{
	for(int j=1;j<m;j++)
	{
		dp[i][j]=grid[i][j]+min(dp[i-1][j],min(dp[i][j-1],dp[i-1][j-1]));
	}
}

return dp[n-1][m-1];	
}



int main()
{
	
	int cost[n][m] = { {1, 2, 3},
                      {4, 8, 2},
                      {1, 5, 3} };
	
	
	cout<<mincost(cost);
}


//0
/*
This is a shortest path problem in a weighted graph, and is solveable by Dijkstra's Algorithm 
(if all costs are positives) or Bellman-Ford Algorithm.

In here, the graph is G=(V,E), where V={(x,y) | (x,y) is a cell in the matrix}, and E={(u,v) |
 can move from cell u to cell v}.
Your weight function will be w((x1,y1),(x2,y2)) = cost[x2][y2] for every edge in the graph.


Note that both algorithm will fail if the graph has a 'negative cycle' -
because there is no such thing as minimal cost in such graphs.
*/
