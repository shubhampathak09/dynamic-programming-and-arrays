#include<bits/stdc++.h>
using namespace std;


vector<int>top;
vector<int>g[101];
vector<int>visited(101);
vector<int>in(101);
vector<int>dp(101);


void topsort()
{
	int n,m;
	cin>>n>>m;
	
	for(int i=0;i<m;i++)
	{
		int a,b;
		cin>>a>>b;
		g[a].push_back(b);
		in[b]++;
	}
	
	queue<int>q;
	
	for(int i=1;i<=n;i++)
	{
		if(in[i]==0)
		q.push(i);
	}
	
	
	while(!q.empty())
	{
		int u=q.front();
		q.pop();
		//if(in[u]==0)
		top.push_back(u);
		
		
		int ct=0; // to check cycles lets assume  given graph is directed and contain no cycles
		
		for(auto x:g[u])
		{
			//ct++
			in[x]=in[x]-1;
			if(in[x]==0)
			q.push(x);
		}
	}
	// result stored in top sort
	
	dp[1]=1;
	
	
	for(auto x:top)
	{
	 
	 for(auto i:g[x])
	 {
	 	dp[i]+=dp[x];
			}   	
	}
     
	for(auto x:top)
	{
		cout<<x<<" ";
	 } 
	 cout<<endl;
	 	
	for(int i=1;i<=n;i++)
	cout<<dp[i]<<" ";
	
	cout<<endl;
	
	cout<<dp[n];
	

}

int main()
{
	
  
  topsort();	
	
}
