// Single Source Shortest path problem

#include<bits/stdc++.h>
using namespace std;


void solve()
{
	
	int n,m;
	
	cin>>n>>m;
	vector<int>dist(n+1);
	vector<pair<int,int>>g[n+1];
	for(int i=1;i<=m;i++)
	{
		int a,b,c;
		cin>>a>>b>>c;
		
		g[a].push_back({b,c});
		g[b].push_back({a,c});
	}
	for(int i=1;i<=n;i++)
	dist[i]=INT_MAX;
	dist[1]=0;
	priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    
    pq.push({0,1});  // weight and src of source
	
	while(!pq.empty())
	{
		// d.assign(m,INF)
		auto u=pq.top();
		pq.pop();
		for(auto x:g[u.second])
		{
		
		if(x.second+dist[u.second]<dist[x.first])
		{
			dist[x.first]=x.second+dist[u.second];
			pq.push({dist[x.first],x.first});
		}
	}
	}
	
	cout<<dist[n];
}


int main()
{
	
	// sample test case use your own:P
	
}
