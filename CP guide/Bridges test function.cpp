// bridges in graph test

// Practice around 50 problems
#include<bits/stdc++.h>

using namespace std;

vector<int>a[100];
int in[101],low[101],visited[101];

int timer;


void dfs(int src,int parent)
{
	visited[src]=1;
	in[src]=timer;
	low[src]=timer;
	timer++;
	
	for(auto x:a[src])
	{
		if(x==parent)
		continue;
		
		if(visited[x])
		{
			
			low[src]=min(low[src],in[x]); // min(low[cuurent],in[x])
			
		}
		else
		{
			dfs(x,src);
			low[src]=min(low[src],low[x]);
			if(low[x]>in[src])
			{
				cout<<src<<" "<<x<<" "<<"is"<<" "<<"Bridge";
				cout<<endl;
			}
		    
		}
	}
}


int main()
{
	
	int n,m;
	cin>>n>>m;
	
	int x,y;
	
	
	for(int i=1;i<=m;i++)
	{
		cin>>x>>y;
		a[x].push_back(y);
		a[y].push_back(x);
	}
	
	dfs(1,-1);
	
}

/*
4 4
1 2
2 3
3 4
2 4
*/
/*
1 2 is Bridge
*/
