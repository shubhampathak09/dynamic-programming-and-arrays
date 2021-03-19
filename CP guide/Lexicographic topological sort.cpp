// Lexicographical top sort

#include<bits/stdc++.h>
using namespace std;

vector<int>g[101];
vector<int>in(101);
vector<int>result;

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
    
    set<int>s;
    priority_queue<int,vector<int>,greater<int>>pq;
	for(int i=1;i<=n;i++)
	{
		if(in[i]==0)
		s.insert(i);
		}
		int ct=0;
		
	while(s.empty()==false)
	{
		ct++;
		int u=*s.begin();
		result.push_back(u);
		s.erase(s.begin());
		for(auto x:g[u])
		{
			in[x]=in[x]-1;
			if(in[x]==0)
			s.insert(x);
		}
			}
			
			if(ct!=n)
			{
				cout<<-1;
					}
					else
					{
						for(auto x:result)
						{
							cout<<x<<" ";
						}
							}		
}

int main()
{
	
	solve();
	
}
// next use priotity queues
/*
6 6
6 3
6 1
5 1
5 2
3 4
4 2
5 6 1 3 4 2
*/
