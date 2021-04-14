#include<bits/stdc++.h>
using namespace std;

vector<int>adj[101];


int dp1[101];
int dp2[101];


void dfs(int V,int p)
{
	
	int sum1=0;
    int sum2=0;
	
	for(auto v:adj[V])
	{
		if(v==p)
		continue;
		
		dfs(v,V);
		sum1+=dp2[v];
		sum2+=max(dp1[v],dp2[v]);
	}
	dp1[V]=sum1;
	dp2[V]=sum2;
}

void solve()
{
	
	int n=5;
	
	int m=4;
	
	for(int i=1;i<=m;;i++)
	{
		int a,b;
		
		cin>>a>>b;
		
		g[a].push_back(b);
		g[b].push_back(a);
	}
	
	dfs(1,-1);
	
	int ans=max(dp1[1],dp2[1]);
	
	cout<<ans;
}


int main()
{
	
	solve();
	
}
