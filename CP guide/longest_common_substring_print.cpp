// longest common substring

#include<bits/stdc++.h>
using namespace std;

void longest_common_substring(string s1,string s2)
{
	
	int n=s1.length();
	
	int m=s2.length();
	
	int dp[n+1][m+1];
	int mx=INT_MIN;
	int xi,yi;
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=m;j++)
		{
			if(i==0||j==0)
			dp[i][j]=0;
			else if(s1[i-1]==s2[j-1])
			{
				dp[i][j]=1+dp[i-1][j-1];
				if(mx<dp[i][j])
				{
					 xi=i;
					 yi=j;
					mx=dp[i][j];
				}
			}
			else
			{
				dp[i][j]=0;
			}
		}
	}
	string temp="";
	while(xi>0&&yi>0)
	{
		if(s1[xi-1]==s2[yi-1])
		{
			temp.push_back(s1[xi-1]);
		
		}
			xi--;
			yi--;
		
	}
	reverse(temp.begin(),temp.end());
	
	cout<<temp;
}
int main()
{
	
	longest_common_substring("RACCF","CCF");
	
}
