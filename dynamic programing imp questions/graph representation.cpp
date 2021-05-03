
#include<bits/stdc++.h>
using namespace std;


vector<vector<pair<int,int>>>g(10001);

int main()
{
	
	int n=7;
	int m=6;
	
	for(int i=1;i<=m;i++)
	{
		
		int w,a,b;
		
		cin>>w>>a>>b;
		
		
		g[a].push_back({w,b});
		g[b].push_back({w,a});
	}
	
	// adjaceny list representation
}



// in java
/*
ArrayList<Edge>graph=new ArrayList<Edge>(7);

for(int i=0;i<7;i++)
{
	graph[i]=new ArrayList<Edge>();
}

//graph[0].add(int src,int nbr,int wt);
*/
