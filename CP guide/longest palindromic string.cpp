// longest palindrome length
#include<bits/stdc++.h>
using namespace std;


int solve(string s)
{
	int maxlen=INT_MIN;
	int n=s.length();
	
	int dp[n][n];
	
	for(int g=0;g<n;g++)
	{
		for(int i=0,j=g;j<n;i++,j++)
		{
			if(g==0)
			{
				dp[i][j]=1;
			}
			else if(g==1)
			{
				if(s[i]==s[j])
				dp[i][j]=2;
				else
				dp[i][j]=0;
			}
			else
			{
				if(s[i]==s[j]&&dp[i+1][j-1]!=0)
				dp[i][j]=2+dp[i+1][j-1];
				else
				dp[i][j]=0;
			}
			
			maxlen=max(maxlen,dp[i][j]);
		}
		
	}
	
	return maxlen;
}

int main()
{
	
	string s="abccbc";
	
	cout<<solve(s);
}
