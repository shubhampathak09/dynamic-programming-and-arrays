#include<bits/stdc++.h>
using namespace std;


class graph
{
	
	
	int v;
	vector<int>*g;
	
	
	public:
	graph(int v)
	{
		this->v=v;
		g=new vector<int>[v];
	}
	
	void addedge(int u,int v)
	{
		g[u].push_back(v);
	//	g[v].push_back(u);
	}
	
	void bfs(int s)
	{
		
		bool *visited=new bool[v];
		
		for(int i=0;i<v;i++)
		visited[i]=0;
		
		queue<int>q;
		
		q.push(s);
		
		visited[s]=1;
		
		while(!q.empty())
		{
			auto x=q.front();
			q.pop();
			cout<<x<<" ";
			
			for(int val:g[x])
			{
				if(visited[val]==false)
				{
				visited[val]=1;
				q.push(val);
		}	}
		}
		
	}

};

int main()
{
	 graph go(4);
    go.addedge(0, 1);
    go.addedge(0, 2);
    go.addedge(1, 2);
    go.addedge(2, 0);
    go.addedge(2, 3);
    go.addedge(3, 3);
    
    go.bfs(2);
	
}
