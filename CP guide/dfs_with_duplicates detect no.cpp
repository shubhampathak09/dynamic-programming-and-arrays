// dfs with duplicate

#include<bits/stdc++.h>
using namespace std;

vector<int>g[100];


dfs(int src)
{

cout<<src<<endl;

for(auto x:g[src]) 
{
	dfs(x);
	}	
	
}
void solve()
{
	
	int n,m;
	
//	vector<int>g[n+1];
	
	cin>>n>>m;
	
	for(int i=0;i<m;i++)
	{
		int a,b;
		cin>>a>>b;
		g[a].push_back(b);
	//	g[b].push_back(a);
	}
	
	dfs(1);
	
	
}

int main()
{
	
	solve();	
}
