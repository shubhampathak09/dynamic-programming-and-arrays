#include<bits/stdc++.h>
using namespace std;

int solve(int coins[],int money)
{
	
	int n=sizeof(coins)/sizeof(coins[0]);
	
	int dp[n+1][money+1];
	
	for(int i=0;i<=n;i++)
	{
		dp[i][0]=1;
	}
	for(int i=0;i<=money;i++)
	{
		dp[0][i]=0;
	}
	dp[0][0]=1;
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=money;j++)
		{
			if(coins[i-1]<=j)
			{
				dp[i][j]=dp[i-1][j]+dp[i][j-coins[i-1]];
			}
			else
			dp[i][j]=dp[i-1][j];
		}
	}
	
 
	
	return dp[n][money];
}

int main()
{
	
	int coins[]={5,7};
	int money=11;
	
	cout<<solve(coins,money);
	cout<<endl;
//	cout<<solve({5,7},11);
}
