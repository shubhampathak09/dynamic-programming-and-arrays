#include<bits/stdc++.h>
using namespace std;


int findcoeff(int n,int k)
{
	
	
	if(n<0||k<0)
	return 0;
	if(n==0&&k>0)
	return 0;
	if(k==0)
	return 1;
	
	return findcoeff(n-1,k)+findcoeff(n-1,k-1);
	
}



int solve(int n,int k)
{
	
	
	int dp[n+1][k+1];
	
	for(int i=0;i<=k;i++)
	{
		dp[0][k]=0;
	}
	for(int i=0;i<=n;i++)
	{
		dp[i][0]=i;
	}
	
	dp[0][0]=1;
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=k;k++)
		{
			 dp[i][j]=dp[i-1][j]+dp[i-1][j-1];
		}
	}
	
	
	return dp[n][k];
}
int main()
{
	
	
	int n=5;
	int k=2;
	
	cout<<findcoeff(n,k)<<endl;
	
//	cout<<solve(5,2);
	
}


// recursive solution works fine dp top down tablulation some unseen probelms
