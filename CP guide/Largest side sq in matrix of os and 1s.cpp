// largest ares rectrangular su matrux

#include<bits/stdc++.h>
using namespace std;

void solve()
{
	
	
	int mat[5][5]={{1,1,1,1,1},{0,1,1,1,0},{1,0,1,0,1},{1,1,1,1,0},{1,1,1,1,0}};
	
	
	int dp[5][5];
	
//	int ans=INT_MIN; // in case all zeros ans=0;

int ans=0;
	for(int i=4;i>=0;i--)
	{
		for(int j=4;j>=0;j--)
		{
			if(i==4||j==4)
			dp[i][j]=mat[i][j];
			
			else if(mat[i][j]==0)
			dp[i][j]=0;
			
			else
			{
			
			dp[i][j]=min(dp[i+1][j],min(dp[i][j+1],dp[i+1][j+1]))+1;
			if(ans<dp[i][j])
			ans=dp[i][j];
		}
		}
	}
	
	cout<<ans;
}

int main()
{
	
	solve();
	
}
