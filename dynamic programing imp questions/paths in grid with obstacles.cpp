// count paths in Maze

#include<bits/stdc++.h>
using namespace std;

#define R 4
#define C 4



int countpaths(int mat[R][C])
{
	
	int dp[R][C];
     
	dp[R-1][C-1]=1;
	 	
	for(int i=R-1;i>=0;i--)
	{
	 for(int j=C-1;j>=0;j--)
		{
			
			if(i==R-1&&j==C-1)
			{
			if(mat[i][j]==-1)
			dp[i][j]=0;
			else
			dp[i][j]=1;
		}
			else if(i==R-1)
			{
				if(mat[i][j]==-1)
				dp[i][j]=0;
				else
				dp[i][j]=1;
			}
			else if(j==C-1)
			{
		    if(mat[i][j]==-1)
			dp[i][j]=0;
			else	
			dp[i][j]=1;
		}
			else
			{
		    if(mat[i][j]==-1)
			dp[i][j]=0;
			else	
			dp[i][j]=dp[i+1][j]+dp[i][j+1];
		}
		}
	}
	
	return dp[0][0];
//	for(int )
}

int main()
{
	
	int maze[R][C]={{0,0,0,0},{0,-1,0,0},{-1,0,0,0},{0,0,0,0}};
	
	cout<<countpaths(maze);
}
