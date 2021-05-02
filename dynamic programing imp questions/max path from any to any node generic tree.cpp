/// nice proble on dp
// longest path from any node to any node

#include<bits/stdc++.h>
using namespace std;



vector<int>in(10001);
vector<int>out(10001);
vector<int>g[10001];

int dp1[10001],dp2[10002];


void dfs1(int src,int parent)
{
	
	dp1[src]=0;
	
	for(auto x:g[src])
	{
		if(x==parent)
		continue;
		
		dfs1(x,src);
		
		dp1[src]=max(dp1[src],dp1[x]+1);
	}
	
}


void dfs2(int src,int parent)
{
	
	int mx1=-1,mx2=-1;
	
	for(auto x:g[src])
	{
		if(x==parent)
		continue;
		
		if(dp1[x]>=mx1)
		{
			mx2=mx1;
			mx1=dp1[x];
		}
		else if(dp1[x]>mx2)
		{
			mx2=dp1[x];
		}
	}
	
	for(auto x:g[src])
	{
		
		if(x==parent)
		continue;
		
		int longest=mx1;
		
		
		if(dp1[x]==longest)
		{
			longest=mx2;
		}
		
		dp2[src]=1+max(dp2[src],1+longest);
		
		dfs2(x,src);
	}
	
}

int main()
{
	
	int n=11;
int m=10;
	
for(int i=1;i<=m;i++)
{
	
	int a,b;
	
	cin>>a>>b;
	
	g[a].push_back(b);
	g[b].push_back(a);
	
	
}




dfs1(1,-1);

dfs2(1,-1);	

cout<<"...."<<endl;

for(int i=1;i<=n;i++)
{

cout<<dp1[i]<<" "<<dp2[i];
cout<<endl;
}

cout<<"----"<<endl;
for(int i=1;i<=n;i++)
{
	
	cout<<"Max height when "<<i<<" is considered root is "<<max(dp1[i],dp2[i]);
	cout<<endl;
}

	
}


//cools
