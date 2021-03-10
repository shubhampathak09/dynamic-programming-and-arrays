// rod cutting problem

#include<bits/stdc++.h>
using namespace std;


int main()
{
	int n=8;
	int price[]={1,5,8,9,10,17,17,20};
	int length[]={1,2,3,4,5,6,7,8};
	int dp[n+1][n+1];
	
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=n;j++)
		{
			
			if(i==0||j==0)
			dp[i][j]=0;
			else if(length[i-1]<=j)
			{
				dp[i][j]=max(dp[i-1][j],price[i-1]+dp[i][j-length[i-1]]);
			}
			else
			dp[i][j]=dp[i-1][j];
		}
	}
	
	cout<<dp[n][n];
}


//unbound knapsack
