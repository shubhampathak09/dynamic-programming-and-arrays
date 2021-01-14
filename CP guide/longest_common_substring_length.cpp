#include<bits/stdc++.h>
using namespace std;

int longest_common_substring(string s1,string s2)
{
	
	int n=s1.length();
	int m=s2.length();
	
	int dp[n+1][m+1];
	int mx=INT_MIN;
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=m;j++)
		{
			if(i==0||j==0)
			dp[i][j]=0;
			
			else if(s1[i-1]==s2[j-1])
			{
				dp[i][j]=1+dp[i-1][j-1];
			//	cout<<dp[i][j]<<endl;
				mx=max(mx,dp[i][j]);
			}
			else
			{
				dp[i][j]=0;
			}
		}
	}
	return mx;
}

int main()
{
	
	string s1="backstage";
	
	string s2="backstatement";
	
	cout<<longest_common_substring(s1,s2);
	
}
