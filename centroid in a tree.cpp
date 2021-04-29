// find centroid

#include<bits/stdc++.h>
using namespace std;

//int n=7;

vector<int>subtree(101);
vector<int>g[101];



void build(int node,int parent)
{
	
	subtree[node]=1;
	
	for(auto x:g[node])
	{
		
		if(x==parent)
		continue;
		
		build(x,node);
		
		subtree[node]+=subtree[x];
		
	}
	
}

int centroid(int node,int par,int n)
{
	
	
	for(auto x:g[node])
	{
		
		if(x!=par&&subtree[x]>n/2)
		return centroid(x,node,n);
		
		return node;
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


build(1,-1);


int ans=centroid(1,-1,n);
	
	
cout<<ans;	
// buidl graph here update n in global'
	

//call centroid to find the centroid node	
}
