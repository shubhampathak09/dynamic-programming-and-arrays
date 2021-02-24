//max gold mine problem
#include<bits/stdc++.h>
using namespace std;


void solve()
{

vector<vector<int>>a={{3,2,3,1},{2,4,6,0},{5,0,1,3},{9,1,5,1}};

int n=a.size();
int m=a[0].size();


int mx=INT_MIN;
int dp[n][m];

for(int i=0;i<n;i++)
{
	dp[i][m-1]=a[i][m-1];
		
	
}

for(int i=0;i<n;i++)
{
	for(int j=m-2;j>=0;j--)
	{
		
		if(i==0)
		{
			dp[i][j]=a[i][j]+max(dp[i][j+1],dp[i+1][j+1]);
		}
		else if(i==n-1)
		{
			dp[i][j]=a[i][j]+max(dp[i][j+1],dp[i-1][j+1]);
		}
		else
		dp[i][j]=a[i][j]+max(dp[i][j+1],max(dp[i-1][j+1],dp[i+1][j+1]));
	}
}


    cout<<dp[0][0];
    cout<<endl;
    
    
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		cout<<dp[i][j]<<" ";
		cout<<endl;
	}
	
	cout<<mx;
}


int main()
{

solve();	
	
}
