#include<bits/stdc++.h>
using namespace std;


vector<pair<int,int>>g[10001];

vector<int>parent(10001);
vector<int>dist(10001);


void solve()
{
	
	
	int n,m;
	cin>>n>>m;
	
	for(int i=1;i<=m;i++)
	{
		int a,b,w;
		cin>>a>>b>>w;
        g[a].push_back({w,b});
        g[b].push_back({w,a});
	}
	
	priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
	
	
	int src=1;
    
    for(int i=1;i<=n;i++)
    {
    	dist[i]=INT_MAX;
	}
    
	dist[src]=0;
	
	pq.push({src,dist[src]});
	
	while(!pq.empty())
	{
		
		auto u=pq.top();
		pq.pop();
		
		for(auto x:g[u.second])
		{
			
			if(dist[x.second]>x.first+dist[u.second])
			{
				dist[x.second]=x.first+dist[u.second];
				pq.push({dist[x.second],x.second});
				parent[x.second]=u.second;
			}
		}
		
		}	
		
		cout<<dist[n];
}
// path

int main()
{
	

	solve();
	
}
