// length of longest substring 
#include<bits/stdc++.h>
using namespace std;

int common_sub(string s1,string s2)
{
	int n=s1.length();
	
	int m=s2.length();
	
	int maxlen=INT_MIN;
	
	int dp[n+1][m+1];
	
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=m;j++)
		{
			
			if(i==0||j==0)
			{
				dp[i][j]=0;
			}
			else if(s1[i-1]==s2[j-1])
			{
				dp[i][j]=1+dp[i-1][j-1],
				
				maxlen=max(maxlen,dp[i][j]);
			}
			else
			dp[i][j]=0;
		}
	}
	return maxlen;
//	return dp[n][m];
}

int main()
{
	
	string s1="aaaabbccd";
	
	string s2="aaaabccd";
	
	cout<<common_sub(s1,s2);
}
