// path with max gold

#include<bits/stdc++.h>
using namespace std;


int main()
{
	
	int mat[3][3] = {{1, 3, 3},
                   {2, 1, 4},
                  {0, 6, 4}};
                  
                  
    int dp[3][3];
	
	              
	for(int j=2;j>=0;j--)
	{
		for(int i=2;i>=0;i--)
		{
			
			if(j==2)
			dp[i][j]=mat[i][j];
			
			else if(i==0)
			{
				dp[i][j]=max(dp[i][j+1],dp[i+1][j+1])+mat[i][j];
			}
		else if(i==2)
			{
				dp[i][j]=max(dp[i][j+1],dp[i-1][j+1])+mat[i][j];
			}
			else
			dp[i][j]=max(dp[i][j+1],max(dp[i+1][j+1],dp[i-1][j+1]))+mat[i][j];
		}
	}
	
	int maxcost=INT_MIN;
	for(int i=0;i<=2;i++)
	{
		maxcost=max(dp[i][0],maxcost);
	
	//cout<<dp[i][0];
	}
	
	cout<<maxcost;
}
