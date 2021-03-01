// euler circuit test

#include<bits/stdc++.h>
using namespace std;


vector<vector<int>>adj;
vector<int>path;
vector<int>path_index;
//vector<int>visited;
vector<int>vertexpath;

int index;

void dfs(int src,int parent)
{
//visited[src]=1;	
	
path_index[src]=index;
path.push_back(index++);
vertexpath.push_back(src);
for(auto x:adj[src])
{
	if(x==parent)
	continue;
	
	
	dfs(x,src); // children paticulat
	path.push_back(path_index[src]);
	vertexpath.push_back(src);	
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
    
	
	cout<<endl;
		
	for(int i=1;i<=n;i++)
	{
		cout<<path_index[i]<<" ";
	}
	
	cout<<endl;
	
	for(auto x:vertexpath)
	{
		cout<<x<<" ";
	}
}

/* i/o
1 2
1 3
2 4
2 5
3 6
3 7
0 1 2 1 3 1 0 4 5 4 6 4 0
0 1 4 2 3 5 6
1 2 4 2 5 2 1 3 6 3 7 3 1
*/
