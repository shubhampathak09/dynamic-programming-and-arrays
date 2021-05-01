//Height of nodes in generic tree

#include<bits/stdc++.h>
using namespace std;

vector<int>g[101];
vector<int>dp(101);

void dfs(int src,int parent)
{
	
	dp[src]=0;
	int mx=0;
	
	for(auto x:g[src])
	{
		
		if(x==parent)
		continue;
		
		dfs(x,src);
		//or
		
		mx=max(mx,dp[x]);
	}
 


	dp[src]=mx+1;
}


void dfs2(int src,int parent)
{
	
	dp[src]=0;
	
	for(auto x:g[src])
	{
		
		if(x==parent)
		continue;
		
		dfs2(x,src);
		
		dp[src]=max(dp[src],1+dp[x]);
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
//dfs(1,-1);

dfs2(1,-1);

for(int i=1;i<=11;i++)
{
	cout<<dp[i]<<endl;
}


//cout<<dp[1];
	
}

/*
1 2
1 3
1 4
2 5
2 6
3 7
7 10
7 11
4 8
4 9
*/
/*
size=4
*/

//leaf nodes are at heeight one or at zero check dfs2

