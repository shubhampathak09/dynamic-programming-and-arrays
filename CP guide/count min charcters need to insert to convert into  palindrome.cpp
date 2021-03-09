// min characters to insert to make it palindrome

#include<bits/stdc++.h>
using namespace std;


void solve()
{
	
	string s1="Ab3bd";
	
	string s2=s1;
	reverse(s2.begin(),s2.end());
	int n=s1.length();
	
	int dp[n+1][n+1];
	
	
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=n;j++)
		{
			if(i==0||j==0)
			dp[i][j]=0;
			else if(s1[i-1]==s2[j-1])
			dp[i][j]=1+dp[i-1][j-1];
			else
			dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
		}
	}
	
	//cout<<dp[n][n];
	
	int ans=s1.length()-dp[n][n];
	cout<<ans;
}

int main()
{
	solve();
}
