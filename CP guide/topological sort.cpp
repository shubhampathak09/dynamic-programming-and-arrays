// topological sorting

#include<bits/stdc++.h>
using namespace std;

vector<int>g[100];
vector<int>result;
vector<int>in(101);

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
	}
	
	queue<int>q;
	
	for(int i=1;i<=n;i++)
	if(in[i]==0)
	{
		q.push(i);
	}
	int ctn=0;
	
	while(!q.empty())
	{
		ctn++;
		int u=q.front();
		result.push_back(u);
		q.pop();
		
		for(auto x:g[u])
		{
			in[x]=in[x]-1;
			if(in[x]==0)
			q.push(x);
		}
			}
		
		if(ctn!=n)
		{
			cout<<-1;
			}
			else
			{
					
		for(auto x:result)
		cout<<x<<" ";
	}
		cout<<endl;
	//	cout<<ctn;	
}

int main()
{
	
	solve();
	
}
// can kahns algo be used to finc cycle in graph? looks lije if cover the count casr in qyeye
// this is assuming that graph is dag and contains no cycle
// have to handle to case to check for cyclesS -> now it handles that casr as well added lines of code

