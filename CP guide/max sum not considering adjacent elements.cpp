#include<bits/stdc++.h>
using namespace std;

int solve(int a[],int n)
{
	
	int dp[n];
	
	int dp1[n];
	int dp2[n];
	
	dp1[0]=a[0]; // considering the last element
	dp2[0]=0;    //not consider the last element
	
	int x=a[0];
	int y=0;
	
	for(int i=1;i<n;i++)
	{
		dp1[i]=a[i]+dp2[i-1];
		dp2[i]=dp1[i-1];
		
//		int first=a[i]+y;
//		int second=x;
		
//		x=first;
//		y=second;
	}
	return max(dp1[n-1],dp2[n-1]);
//	return max(x,y);
}

int main()
{
	
	int a[]={2,4,6,2,5};
	int n=sizeof(a)/sizeof(a[0]);
	
	int ans=solve(a,n);
	
	cout<<ans;
}
