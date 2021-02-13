
// print all minimum paths in shortest path grid
#include<bits/stdc++.h>
using namespace std;



void solve(vector<vector<int>>v)
{
	int n=v.size();
	int m=v[0].size();
	
	int dp[n][m];
//	int n=sizeof(a)/sizeof(a[0]);
	dp[n-1][m-1]=v[n-1][m-1];
	for(int i=m-2;i>=0;i--)
	dp[n-1][i]=v[n-1][i]+dp[n-1][i+1];
	
	for(int j=n-2;j>=0;j--)
	{
		dp[j][m-1]=v[j][m-1]+dp[j+1][m-1];
	}
	
	vector<pair<int,int>>path;
	path.push_back({n-1,m-1});
	
	for(int i=n-2;i>=0;i--)
	{
		for(int j=m-2;j>=0;j--)
		{
	//		dp[i][j]=min(dp[i+1][j],dp[i][j+1])+v[i][j];
			
			if(dp[i+1][j]<dp[i][j+1])
			{
				dp[i][j]=v[i][j]+dp[i+1][j];
				path.push_back({i+1,j});
			}
			else
			{
				dp[i][j]=v[i][j]+dp[i][j+1];
				path.push_back({i,j+1});
			}
		}
	}
	path.push_back({0,0});
	cout<<endl;
	cout<<dp[0][0];
	
	cout<<endl;
	

	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	}
	
	cout<<"path.."<<endl;
	
	for(int i=path.size()-1;i>=0;i--)
	{
		cout<<path[i].first<<" "<<path[i].second<<endl;
		
	}
}

int main()
{
	
	vector<vector<int>>v={{2,6,1,1,3},{9,1,1,0,5},{0,7,5,2,0},{0,7,5,2,0},{4,3,0,4,7},{2,0,1,4,1}};
	
	for(int i=0;i<v.size();i++)
	{
		for(int j=0;j<v[0].size();j++)
		{
			cout<<v[i][j]<<" ";
		}
		cout<<endl;
	}
	
	solve(v);
}
