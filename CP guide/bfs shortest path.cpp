/*3 2
1 2
3 2
1 3
*/

#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n,m;
	cin>>n>>m;
	
	vector<vector<int>>g(n+1);
	
	bool visited[n+1];
	for(int i=1;i<=n;i++)
	visited[i]=0;
	
	for(int i=1;i<=m;i++)
	{
		int a,b;
		
		cin>>a>>b;
		g[a].push_back(b);
		g[b].push_back(a);
	}
     int src,dst;
	 
	 cin>>src>>dst;
	  
	int dist=0;
	queue<int>q;
	q.push(src);
	visited[src]=1;
	
	while(!q.empty())
	{
		int u=q.front();
		q.pop();
		if(u==dst)
		{
			break;
		}
		dist++;
		for(auto x:g[u])
		{
			if(!visited[x])
			{
			
			visited[x]=1;
			q.push(x);
		}
		}
	}
	
	cout<<dist;
	
	cout<<endl; 
	
	cout<<"The number of gear switches needed is.."<<"\t"<<dist-1;
	
	cout<<endl;
}

//ok
int main()
{
	
	solve();
	
}
