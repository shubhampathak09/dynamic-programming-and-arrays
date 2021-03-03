//
#include<bits/stdc++.h>
using namespace std;

vector<int>g[101];

int in[101],low[101];
int timer;
int vis[101];

set<int>articulation_point;

void dfs(int src,int par=-1)
{
	
	in[src]=timer;
	low[src]=timer;
	vis[src]=1;
	int children=0;
	timer++;
	
	for(auto x:g[src])
	{
		if(x==par)continue;
		
		if(vis[x])
		{
			
			low[src]=min(low[src],in[x]);
		}
		else
		{
			dfs(x,src);
			low[src]=min(low[src],low[x]);
			if(low[x]>=in[src]&&par!=-1) // check if articulation point
			articulation_point.insert(src);
		    children++;
		}
	}
	
	if(par==-1&children>1)
	articulation_point.insert(src);
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
	vis[i]=0;
	
	
	for(int i=1;i<=n;i++)
	{
		if(vis[i]==0)
		dfs(i);
		}	
	
    for(auto x :articulation_point)
	{
		cout<<x<<endl;
		}	
	
	
}

/*
4 4
1 2
2 3
2 4
3 4
*/
