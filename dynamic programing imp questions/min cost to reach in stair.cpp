#include<bits/stdc++.h>
using namespace std;

int minmoves(int a[],int n)
{
	int dp[n];
	
	if(n==1)
	return a[0];
	
	dp[0]=a[0];
	dp[1]=a[1];
	
	
	for(int i=2;i<n;i++)
	{
		dp[i]=min(dp[i-1],dp[i-2])+a[i];
	}
	return min(dp[n-1],dp[n-2]);
}

int main()
{
	
	int a[]={2,5,3,1,7,3,4};
	int n=sizeof(a)/sizeof(a[0]);
	
	
	int ans=minmoves(a,n);
	
	cout<<ans;
}
