// longest increasing substring

#include<bits/stdc++.h>
using namespace std;


int solve(int a[],int n)
{
	int dp[n];
	
	dp[0]=1;
	int k=0;
	int ovmax=INT_MIN;
	for(int i=1;i<n;i++)
	{
		int mx=0;
		
		for(int j=k;j<i;j++)
		{
			if(a[j]<=a[i])
			{
				mx=max(mx,dp[j]);
			}
			else
			{
				mx=0;
				k=i;
			}
		}
	//	cout<<mx<<endl;
		dp[i]=1+mx;
		if(dp[i]>ovmax)
		ovmax=dp[i];
	}
	
	for(int i=0;i<n;i++)
	{
		cout<<dp[i]<<" ";
		
	}
	cout<<endl;
	
	return ovmax;
}

int main()
{
	
	int a[]={1,1,2,3,4,0,8,9,1,1,0,0,2};
	
	int n=sizeof(a)/sizeof(a[0]);
	
	cout<<solve(a,n);
	
}
