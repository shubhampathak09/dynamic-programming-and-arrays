#include<bits/stdc++.h>
using namespace std;
/*
int solve(int n)
{
	int dp[n];
	
	dp[0]=1;
	dp[1]=0;
	dp[2]=1;
	
	for(int i=3;i<=n;i++)
	{
		dp[i]=2*dp[n-2]+4*dp[n-3];
	}
	
	return dp[n];
}
*/

int solve(int n)
{
	
	int a[n+1];
	int b[n+1];
	
	a[0]=1;
	b[0]=0;
	a[1]=0;
	b[1]=1;
	
	
	for(int i=2;i<=n;i++)
	{
		a[i]=a[i-2]+2*b[i-1];
		b[i]=a[i-1]+b[i-2];
	}
	
	return a[n];
}

int main()
{
	
	int n=8;
	
	cout<<solve(n);
	
}
