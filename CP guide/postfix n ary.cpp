// preorder n arry
#include<bits/stdc++.h>
using namespace std;

vector<int>g[101];
vector<bool>visited(101);

void dfs(int src)
{
	visited[src]=1;
	//cout<<src<<" ";
	for(auto x:g[src])
	{
		if(visited[x]==false)
		dfs(x);
		cout<<x<<" ";
	}
	
}

int main()
{
	
	int n,m;
	cin>>n>>m;
	
	for(int i=1;i<=m;i++)
	{
		int a,b;
		cin>>a>>b;
		g[a].push_back(b);
		g[b].push_back(a);
	}
	
	for(int i=1;i<=n;i++)
	visited[i]=0;
	
	dfs(1);
	
}

/// something not right
// will review later

