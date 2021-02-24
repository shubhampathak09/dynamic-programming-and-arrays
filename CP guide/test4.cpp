//test 4
// number of ways to achieve target sum
// elemts of subset cant be used more than once

#include<bits/stdc++.h>
using namespace std;


void solve()
{
	
	int a[]={4,2,7,1,3};
	
	
	int n=sizeof(a)/sizeof(a[0]);
	
	int sum=10;  //4,2,1,3,,7,3,,7,2,1
	
	
	int dp[sum+1][n+1];
	
	for(int i=0;i<=n;i++)
	{
		dp[0][i]=1;
	}
	for(int i=1;i<=sum;i++)
	dp[i][0]=0;
	
	for(int i=1;i<=sum;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(a[j-1]<=i)
			{
				dp[i][j]=dp[i-a[j-1]][j-1]+dp[i][j-1];
			}
			else
			dp[i][j]=dp[i][j-1];
		}
	}
	
	cout<<dp[sum][n];
	 return;
	 
}

int main()
{
	
	solve();
	
}
