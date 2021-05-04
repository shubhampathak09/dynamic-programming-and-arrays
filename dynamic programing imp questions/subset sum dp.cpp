#include<bits/stdc++.h>
using namespace std;


bool subsetsum(int a[],int n,int T)
{
	
	//int n=sizeof(a)/sizeof(a[0]);
	
	
	int dp[n+1][T+1];
	
	for(int i=0;i<=T;i++)
	dp[0][i]=0;
	
	for(int i=0;i<=n;i++)
	dp[i][0]=1;
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=T;j++)
		{
			
			
		 
			 if(a[i-1]<=j)
			{
				dp[i][j]=dp[i-1][j]||dp[i-1][j-a[i-1]];
			}
			else
			dp[i][j]=dp[i-1][j];
		}
	}
	return dp[n][T];
}

int main()
{
	
	int a[]={2,1,3,4,5};
	
	int t=12;
    int k=sizeof(a)/sizeof(a[0]);
		
	int ans=subsetsum(a,k,t);
	
	cout<<ans;
}
