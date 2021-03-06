#include<bits/stdc++.h>
using namespace std;

// count all distinct subsequence in string

void solve()
{

string s="abcbac";

int n=s.length();

int dp[n+1];

dp[0]=1;

map<char,int>mp; // store the last occurence of character in mapo
for(int i=1;i<=n;i++)
{
	if(mp.find(s[i-1])!=mp.end())
	{
		int index=mp[s[i-1]]-1;
		dp[i]=2*dp[i-1]-dp[index];
		mp[s[i-1]]=i; // update the last index
	}
	else
	{
		dp[i]=2*dp[i-1];
		mp[s[i-1]]=i;  // store the current index as last index as first occurence
	}
}
cout<<dp[n];
return;	
	
}

int main()
{
	
	solve();
	
}
