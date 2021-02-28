// euler circuit test

#include<bits/stdc++.h>
using namespace std;


vector<vector<int>>adj;
vector<int>path;
vector<int>path_index;
//vector<int>visited;

int index;

void dfs(int src,int parent)
{
//visited[src]=1;	
	
path_index[src]=index;
path.push_back(index++);

for(auto x:adj[src])
{
	if(x==parent)
	continue;
	
	
	dfs(x,src); // children paticulat
	path.push_back(path_index[src]);	
}
	
}

int main()
{
	
	int n=7;
	int m=6;
	
	adj.resize(n+1);
	path_index.resize(n+1);
//	visited.resize(n+1);
	
	for(int i=1;i<=m;i++)
	{
		int a,b;
		cin>>a>>b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	
	dfs(1,-1);
	
	for(auto x:path)
	{
		cout<<x<<" ";
	}
}
