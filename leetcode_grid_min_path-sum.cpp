// min path sum grid

#include<bits/stdc++.h>
using namespace std;


int minpathsum(vector<vector<int>>grid)
{
	
	int R=grid.size();
	int C=grid[0].size();
	
	//cout<<R;
	//cout<<C;
	
	int dp[R][C];
	
	
	dp[0][0]=grid[0][0];

  //  cout<<dp[0][0];
    
    for(int i=1;i<R;i++)
     dp[i][0]=dp[i-1][0]+grid[i][0];
    
    for(int j=1;j<C;j++)
    dp[0][j]=dp[0][j-1]+grid[0][j];
    
    for(int i=1;i<R;i++)
    {
    	for(int j=1;j<C;j++)
    	{
    		dp[i][j]=grid[i][j]+min(dp[i-1][j],dp[i][j-1]);
		}
	}

     for(int i=0;i<R;i++)
     {
     	for(int j=0;j<C;j++)
     	{
     		cout<<dp[i][j]<<" ";
		 }
		 cout<<endl;
	 }

	
	return dp[R-1][C-1];
	
	

}

int main()
{
	
	vector<vector<int>>graph={{1,3,1},{1,5,1},{4,2,1}};
	
	cout<<minpathsum(graph);
}
