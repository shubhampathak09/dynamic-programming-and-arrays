#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	
	int n;
	cin>>n;
	
	int dp[n+1];
	
	dp[0]=0;
	dp[1]=1;
	
	
	for(int i=1;i<=n;i++)
	dp[i]=0;
	
	
	dp[0]=1;
	dp[1]=1;
	for(int i=2;i<=n;i++)
	{
		for(int j=0;j<i;j++)
		{
			dp[i]+=dp[j]*dp[i-j-1];
		}
	}
	
	cout<<dp[n];
	
//	n=5 42 n=4 14
}
