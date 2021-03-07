// post order dfs call n ary tree
#include<bits/stdc++.h>
using namespace std;


vector<int>g[101];

vector<bool>visited(101);

void dfs(int src,int parent)
{
	
	visited[src]=1;
	
	for(auto x:g[src])
	{
		if(src==parent)
		continue;
		
		if(!visited[x])
		{
			dfs(x,src);
			cout<<x<<" ";
		}
	}
	// parent
	if(parent==-1)
	cout<<src;
}

int main()
{
// int n=6;
// int m=5;
 int n,m;
 cin>>n>>m;
 
 
 for(int i=1;i<=m;i++)
 {
 	int a,b;
 	cin>>a>>b;
 	
 	g[a].push_back(b);
 	g[b].push_back(a);
 	
 	
 }

  dfs(1,-1);
  	
}
