// different algo using priority_queue
// for lexicographic top sort
#include<bits/stdc++.h>
using namespace std;

vector<int>g[100];
vector<int>result;

vector<int>in(100);

void solve()
{
	int n,m;
	cin>>n>>m;
	
	for(int i=1;i<=m;i++)
	{
		int a,b;
		
		cin>>a>>b;
		g[a].push_back(b);
		in[b]++;
	//	g[b].push_back(a);
		
	}
	priority_queue<int,vector<int>,greater<int>>pq;
	
	for(int i=1;i<=n;i++)
	{
		if(in[i]==0)
		pq.push(i);
	}
    
    int ct=0;
    
    while(!pq.empty())
    {
    	ct++;
    	
    	int u=pq.top();
    	result.push_back(u);
    	pq.pop();
    	
    	for(int i:g[u])
    	{
    		in[i]=in[i]-1;
    		if(in[i]==0)
    		pq.push(i);
		}
		

	}
	
	for(auto x:result)
	{
		cout<<x<<" ";
	}
}

int main()
{
	
	solve();
	
}
/*
8 9
1 4
1 2
4 2
4 3
3 2
5 2
3 5
8 2
8 6
1 4 3 5 7 8 2 6
*/
