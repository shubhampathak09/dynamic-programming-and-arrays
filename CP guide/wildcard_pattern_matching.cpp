#include<bits/stdc++.h>
using namespace std;

void solve()
{
	
	string text="";
	string pattern="";
	
	int n=pattern.length();
	int m=text.length();
	
	int dp[n+1][m+1];
	
	
	for(int i=n;i>=0;i--)
	{
		for(int j=m;j>=0;j--)
		{
			if(i==n&&j==m)
			dp[i][j]=1;
			else if(i==n)
			dp[i][j]=0;
			else if(j==m)
			{
				if(pattern[i]=='*')
				dp[i][j]=dp[i+1][j];
				else
				dp[i][j]=0;
			}
			else
			{
				if(pattern[i]==text[j]||pattern[i]=='?')
				dp[i][j]=dp[i+1][j+1];
				else if(pattern[i]!=text[j])
				dp[i][j]=0;
				else if(pattern[i]='*')
				dp[i][j]=dp[i+1][j]||dp[i][j+1];
			}
		}
	}
	cout<< dp[0][0]; //1-.matches else does not match
	return;
}

int main()
{
	
	solve();
	
	
}

// just code withot testing will test for inputs as well as a second o(n^3) version
// this algorithm run in o(n^2)s
