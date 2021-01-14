#include<bits/stdc++.h>
using namespace std;

int lcs(string s1,string s2)
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
			{
				dp[i][j]=0;
			}
			else if(s1[i-1]==s2[j-1])
			{
				dp[i][j]=1+dp[i-1][j-1];
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

void solve()
{
	int n;
	cin>>n;
	
	vector<string>first;
	vector<string>second;
	for(int i=0;i<n;i++)
	{
		string s;
		cin>>s;
		first.push_back(s);
	}
	int q;
	cin>>q;
	for(int i=0;i<q;i++)
	{
		string s;
        cin>>s;
		second.push_back(s);		
	}
	
	for(int i=0;i<q;i++)
	{
		cout<<lcs(first[i],second[i]); // longest commo substring function
		cout<<endl;
	}
	
}

int main()
{
	
	solve();
	
}
