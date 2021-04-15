#include<bits/stdc++.h>
using namespace std;


vector<int>g[101];
int dp[101];
vector<int>a;

void dfs(int u,int parent)
{
	dp[u]=a[u-1];
	
	int maxi=0;
	
	for(auto x:g[u])
	{
		if(x==parent)
		continue;
		
		dfs(x,u);
		
		maxi=max(maxi,dp[x]);
		
		
	}
	dp[u]+=maxi;
}

int main()
{
	
	
	a= { 3, 2, 1, 10, 1, 3, 9, 1, 5, 3, 4, 5, 9, 8 };
	
	int n=14;
	
	g[1].push_back(2);
	g[2].push_back(1);
	
	g[1].push_back(3);
	g[3].push_back(1);
	g[1].push_back(4);
	g[4].push_back(1);
	
	g[2].push_back(5);
	g[5].push_back(2);
	g[2].push_back(6);
	g[6].push_back(2);
	
	g[3].push_back(7);
	g[7].push_back(3);
	
	g[4].push_back(8);
	g[8].push_back(4);
	g[4].push_back(9);
	g[9].push_back(4);
	g[4].push_back(10);
	g[10].push_back(4);
	g[5].push_back(11);
	g[11].push_back(5);
	g[5].push_back(12);
	g[12].push_back(5);
	
	g[7].push_back(13);
	g[13].push_back(7);
	
	g[7].push_back(14);
	g[14].push_back(7);
	
	dfs(1,-1);
		
 	int ans=0;
		
	for(int i=1;i<=14;i++)
	{
		cout<<dp[i]<<" ";
		ans=max(ans,dp[i]);
	}
	
	cout<<endl;
	
	cout<<ans;
	
}
