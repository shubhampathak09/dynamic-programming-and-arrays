#include<bits/stdc++.h>
using namespace std;


vector<int>spset(10001);
map<int,char>mp;
vector<int>g[10001];


void dfs(int src,int parent)
{
	bool check=1;
	
	if(mp[src]==mp[parent])
	check=0;
	
	for(auto x:g[src])
	{
		
		if(x==parent)
		continue;
		
		dfs(x,src);
		
	/*	if(mp[x]==mp[src])
		{
			check=0;
			spset[x]=0;
		}
		*/
	}
	spset[src]=check;
}

int main()
{
	
	
	int n=10;
	string s;
	cin>>s;
	
	for(int i=1;i<=10;i++)
	{
		mp[i]=s[i-1];
	}
	
	for(int i=1;i<=n-1;i++)
	{
		int a,b;
		cin>>a>>b;
		
		g[a].push_back(b);
		g[b].push_back(a);
	}
	
	dfs(1,-1);
	
for(int i=1;i<=10;i++)
{
	cout<<spset[i];
	}	
	
}



/*
abcabadecc
1 2
1 3
1 4
2 5
2 6
3 7
4 10
7 8
7 9

*/
