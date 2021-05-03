// has path

#include<bits/stdc++.h>
using namespace std;


vector<int>g[1001];
vector<int>visited(1001);

bool haspath(int src,int dest)
{
	
	visited[src]=1;
	
	if(src==dest)
	{
		return true;
	}
	
	for(auto x:g[src])
	{
		
		if(visited[x]==false)
		{
			return haspath(x,dest);
		}
	}
	return false;
	
}


int main()
{
	int n,m;
	
	cin>>n>>m;
	
	
	for(int i=0;i<m;i++)
	{
		int a,b;
		
		cin>>a>>b;
		
		g[a].push_back(b);
		g[b].push_back(a);
		
		
		
	}
	
	for(int i=0;i<n;i++)
	{
		visited[i]=0;
	}
	
	int src,dest;
	
	cin>>src>>dest;
	
	int ans=haspath(src,dest);
	
	cout<<ans;
}


/*
7
8
0 1
1 2
2 3
0 3
3 4
4 5
5 6
4 6
0
6
1  <- o/p
*/
