#include<bits/stdc++.h>
using namespace std;

int cnt;
void solve()
{
	int n,m;
	
	cin>>n>>m;
	
	vector<int>g[n];
	vector<int>indegree(n,0);
	vector<int>topology;
	for(int i=0;i<m;i++)
	{
		int a,b;
		cin>>a>>b;
		g[a].push_back(b);
		indegree[b]++;
	}
	
	queue<int>q;
	
	for(int i=0;i<n;i++)
	{
		if(indegree[i]==0)
		q.push(i);
	 }
	 
	 while(!q.empty())
	 {
	 	
	 	int u=q.front();
	 	q.pop();
	 	topology.push_back(u);
	 	
	 	for(auto x:g[u])
	 	{
	 		indegree[x]--;
	 		if(indegree[x]==0)
	 		q.push(x);
		 }
		 cnt++;
	  } 
	  
	  if(cnt!=n)
	  {
	  	cout<<"cycle exists so no topological sort possible";
	  }
	  else
	  {
	  	for(auto x:topology)
	  	{
	  		cout<<x<<"  ";
		  }
	  }
}
int main()
{
	
	solve();
	
}
