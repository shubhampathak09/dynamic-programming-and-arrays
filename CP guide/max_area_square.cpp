// find the are max square sub matrix
/*
0,1,1,0,1
1,1,0,1,0,
0,1,1,1,0
1,1,1,1,0
1,1,1,1,1
0,0,0,0,0

*/

#include<bits/stdc++.h>
using namespace std;
#define R 6
#define C 5

int maxarea(int mat[R][C])
{
	
	int dp[R][C];
	
	for(int i=0;i<R;i++)
    {
    	dp[0][i]=mat[0][i];
	}
	for(int i=0;i<C;i++)
	{
		dp[i][0]=mat[i][0];
	}
//	int maxval=INT_MIN;
	for(int i=1;i<R;i++)
	{
		for(int j=1;i<C;i++)
		{
			if(mat[i][j])
			{
			cout<<dp[i-1][j]<<" "<<dp[i][j-1]<<" "<<dp[i-1][j-1];
			dp[i][j]=min(dp[i-1][j],min(dp[i][j-1],dp[i-1][j-1]))+1;
		//	maxval=max(maxval,dp[i][j]);
		}
		else
		dp[i][j]=0;
		}
	}
	
	for(int i=0;i<R;i++)
	{
		for(int j=0;j<C;j++)
		{
		//	cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
	
}

int main()
{
	
int mat[R][C]={{0,1,1,0,1},{1,1,0,1,0},{0,1,1,1,0},{1,1,1,1,0},{1,1,1,1,1},{0,0,0,0,0}};

cout<<maxarea(mat);	
	
}
