//ex,k-tree,tetrahedron,hard problem,writing code) 

// k-tree

// bfs

#include<bits/stdc++.h>
using namespace std;

vector<int>g[101];
vector<bool>visited(101);

void bfs(int s)
{
	
	queue<int>q;
	q.push(s);
	while(!q.empty())
	{
		int u=q.front();
		q.pop();
		visited[u]=1;
		cout<<u<<" ";
		for(auto x:g[u])
		{
			if(visited[x]==false)
			q.push(x);
		}
	}
}

void solve()
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
	
	for(int i=1;i<=n;i++)
	{
		if(visited[i]==0)
		bfs(i);
	}
}

int main()
{
	
	solve();
}


