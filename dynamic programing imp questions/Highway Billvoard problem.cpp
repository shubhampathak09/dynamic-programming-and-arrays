// highway billboard problem

#include<bits/stdc++.h>
using namespace std;



int main()
{
	
	int rev[]={5,8,5,3,1};
	int x[]={6,8,12,14,16};
	
	int n=sizeof(x)/sizeof(x[0]);
	
	
	int ans=INT_MIN;
	int t=3;
	
	int dp[n];
	dp[0]=rev[0];
	
	for(int i=1;i<n;i++)
	{
		int mx=0;
		for(int j=0;j<i;j++)
		{
			int dis=x[i]-x[j];
			if(dis>t)
			{
				mx=max(mx,dp[j]);
			}
		}
		dp[i]=mx+rev[i];
		ans=max(ans,dp[i]);
		
	}
	
	cout<<ans;
}
