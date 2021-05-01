#include<bits/stdc++.h>
using namespace std;

vector<int>g[10001];
vector<int>dp(10001);
vector<int>values(10001);


void dfs(int src,int parent)
{
	
	
	dp[src]=values[src-1];
	int mx=0;
	
	for(auto x:g[src])
	{
		
		if(x==parent)
		continue;
        
		dfs(x,src);
				
		mx=max(mx,dp[x]);
		
	}
	
	dp[src]+=mx;
}

int main()
{
	
	int n=14;
    values={3,2,1,10,1,3,9,1,5,3,4,5,9,8};
	
	g[1].push_back(2); //1
	g[2].push_back(1);
	
	g[1].push_back(3);  //2
	g[3].push_back(1);
	
	g[1].push_back(4);  //3
	g[4].push_back(1);
	
	
	g[2].push_back(5);  //4
	g[5].push_back(2);
	
	g[2].push_back(6);  //5
	g[6].push_back(2);
	
	g[5].push_back(11);  //6
	g[11].push_back(5);
	
	g[5].push_back(12);  //7
	g[12].push_back(5);
	
	
	g[7].push_back(13);  //8
	g[13].push_back(7);
		
	g[7].push_back(14);  //9
	g[14].push_back(7);
	
	g[4].push_back(8);  //10
	g[8].push_back(4);
	
	g[4].push_back(9);  //11
	g[9].push_back(4);
	
	g[4].push_back(10);  //12
	g[10].push_back(4);
	
	g[3].push_back(7);
	g[7].push_back(3);
	
	
	dfs(1,-1);
    
//	cout<<values[0];
//	cout<<values[1];	
	cout<<dp[1];
	
}
