#include<bits/stdc++.h>
using namespace std;


int dp[21][(1<<21)];
int cost[21][21];


int solve(int i,int mask,int n)
{
	
	if(i==n)
	{
		return 0;
	}
	
	if(dp[i][mask]!=-1)
	return dp[i][mask];
	
	int ans=INT_MAX;
	
	for(int j=0;j<n;j++)
	{
	
		if((mask)&(1<<j))
		{
			ans=min(ans,cost[j][i]+solve(i+1,mask^(1<<j),n));
			//cout<<ans<<endl;
		}
		
	}
	
	return dp[i][mask]=ans;
}

int main()
{
	// cost of assigning ith person to jth job
	// person row and job col
	
	
	int n;
	
	n=4;
	
	memset(dp,-1,sizeof(dp));
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>cost[i][j];
		}
	}
	
   for(int i=0;i<n;i++)
   {
   	for(int j=0;j<n;j++)
   	{
   		cout<<cost[i][j]<<" ";
	   }
	   cout<<endl;
   }
	
	cout<<solve(0,(1<<n)-1,n);
	
 } 
 
/* 
9 2 7 8
6 4 3 7
5 8 1 8
7 6 9 4

13
*/
