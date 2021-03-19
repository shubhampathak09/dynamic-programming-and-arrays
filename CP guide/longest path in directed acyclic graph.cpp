// length directed acyclic graph in graph

#include<bits/stdc++.h>
using namespace std;

int dp[101];

vector<int>g[101];
vector<int>vis(101);


void solve(int i)
{
	
	vis[i]=true;
	
	for(auto x:g[i])
	{
		if(vis[x]==false)
		{
		
		solve(x);
		}
	    dp[i]=max(dp[i],1+dp[x]); 	
	}
	 
}

int main()
{
	
	int n,m;
	cin>>n>>m;
	
	memset(dp,0,sizeof(dp));
 
    
//	cout<<vis[2];	
	
	for(int i=1;i<=m;i++)
	{
		int a,b;
		cin>>a>>b;
		g[a].push_back(b);
	}
	
//	cout<<vis[3];
	
	for(int i=1;i<=n;i++)
	{
		if(vis[i]==0)
		solve(i);
	}
	int ans=INT_MIN;
	for(int i=1;i<=n;i++)
	ans=max(dp[i],ans);
	cout<<ans;
//	return ans;
	
}



//Directed Acyclic graph
/*
4 5
1 2
1 3
3 2
2 4
3 4
3
*/
