// interesting dfs tree problem

#include<bits/stdc++.h>
using namespace std;


int dp1[101];
int dp2[101];

vector<int>g[101];
vector<int>C(101);
void dfs(int V,int pV)
{
	
	int sum1=0;
	int sum2=0;
	
	for(auto v : g[V])
	{
		if(v==pV)
		continue;
		
		dfs(v,V);
		sum1+=dp2[v];
		sum2+=max(dp1[v],dp2[v]);
	}
	
	// for children  last nodes recurrence
	dp1[V]=C[V]+sum1;
	dp2[V]=sum2;
}

int main()
{
	
	int n;
	cin>>n;
	
	for(int i=1;i<n;i++)
	{
		int a,b;
		cin>>a>>b;
		
		g[a].push_back(b);
		g[b].push_back(a);
	}
	for(int i=1;i<=n;i++)
	{
		int w;
		cin>>w;
		C[i]=w;
	}
	
	dfs(1,0);
	
	// dp1[1] denotes when 1 is included and max sum of grandchildren are added
	// dp2[1] dentotes when 1 is not included and then we can consider to chose its children or grandchildren for each child of src
	
	
	int ans=max(dp1[1],dp2[1]);
	
	cout<<ans;
}

/*
5
1 2
1 3
2 4
2 5
10
5
11
6
8
*/
