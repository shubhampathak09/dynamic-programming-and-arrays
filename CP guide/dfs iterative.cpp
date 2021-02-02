// dfs using stacks

#include<bits/stdc++.h>
using namespace std;


int main()
{
	
	
	int n=5;
	vector<int>g[n+1];
	// creating graph 5 vertices 4 edges
	for(int i=1;i<=4;i++)
	{
		int a,b;
		cin>>a>>b;
		g[a].push_back(b);
		g[b].push_back(a);
	}
	
	bool visited[n+1]; //keep track visited vertice  to avoid visiting a vertex again
	
	for(int i=1;i<=n;i++)
	{
		visited[i]=false; // initialisation
	}
	
	//let say source=1
	int src=1;
	
	stack<int>s;
	
	s.push(1);
	
	visited[1]=1;
	
	while(!s.empty())
	{
		int top=s.top();
	//	visited[top]=true;
		s.pop();
		cout<<top<<" ";
		
		for(auto x:g[top])
		{
		//	cout<<x<<" ";
			if(!visited[x])
			{
		    visited[x]=1;	
			s.push(x);
		}
		}
	}
	
	
}
