// partition n into k subsets

#include<bits/stdc++.h>
using namespace std;

void solve()
{
	
int n,k;

n=4;
k=3;

int dp[k+1][n+1];

for(int i=0;i<=k;i++)
{
	for(int j=0;j<=n;j++)
	{
		if(i==0||j==0)
		dp[i][j]=0;
		
		else if(j<i)
		dp[i][j]=0;
		else if(i==j)
		dp[i][j]=1;
		else
		dp[i][j]=dp[i][j-1]*j+dp[i-1][j-1];
	}
}

cout<<dp[k][n];	
	
}

int main()
{
	solve();
}


// need to check
