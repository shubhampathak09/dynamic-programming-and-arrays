// Regular expression matching

#include<bits/stdc++.h>
using namespace std;

void solve()
{
	
	string pattern="mis*i.*p*i";
	string text="mississippi";
	
	int n=pattern.length();
	int m=text.length();
	
	int dp[n+1][m+1];
	
	
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=m;j++)
		{
			
			if(i==0&&j==0)
			{
				dp[i][j]=1;
			}
			else if(i==0)
			{
				dp[i][j]=0;
			}
			else if(j==0)
			{
				if(pattern[i-1]=='*')
				dp[i][j]=dp[i-2][j];
				else
				dp[i][j]=0;
			}
			else
			{
			 	if(pattern[i-1]==text[j-1])
			 	dp[i][j]=dp[i-1][j-1];
			 	else if(pattern[i-1]=='.')
			 	dp[i][j]=dp[i-1][j-1];
			 	else if(pattern[i-1]='*')
			 	{
			 		if(pattern[i-2]=='.')
			 		dp[i][j]=dp[i-2][j]||dp[i][j-1];
			 		else if(pattern[i-2]==text[j-1])
			 		dp[i][j]=dp[i-2][j]||dp[i][j-1];
			 		else if(pattern[i-2]!=text[j-1])
			 		dp[i][j]=dp[i-2][j]||0;
				 }
				 else
				 dp[i][j]=0;
			}
		}
	}
	
	cout<<dp[n][m];
}

int main()
{
	solve();
	
}
