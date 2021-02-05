
#include<bits/stdc++.h>
using namespace std;


void dfs(int src,vector<int>g[],int a[],int parent,vector<int>&dp)
{
	
	dp[src]=a[src-1];
	
	int nax=0;
	
	for(auto x:g[src])
	{
		
		if(x==parent)
		continue;
		
		dfs(x,g,a,src,dp);
		
		nax=max(nax,dp[x]);
	}
	
	dp[src]+=nax;
	
}


int main()
{
	
	
	int n;
	
	cin>>n;
	
	vector<int>g[n+1];
	vector<int>dp(n+1);
	
	int a[]={1,2,3,4,5,6};
	
	
	for(int i=1;i<=n-1;i++)
	{
		int a,b;
		cin>>a>>b;
		
		g[a].push_back(b);
		g[b].push_back(a);
	}
	
 int src=1;
 
 dfs(1,g,a,-1,dp);
 
 cout<<dp[1];
}


//Yayyy
