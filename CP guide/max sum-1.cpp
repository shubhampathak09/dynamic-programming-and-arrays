#include<bits/stdc++.h>
using namespace std;

void solve()
{
	
	int a[]={5,5,10,100,10,5};
	
	int n=sizeof(a)/sizeof(a[0]);
	
	
	int dp[n];
	
	dp[0]=a[0];
	
	for(int i=1;i<n;i++)
	{
		dp[i]=max(dp[i-1],a[i-1]+dp[i-2]);
	}
	
	cout<<dp[n-1];
}

int main()
{
	solve();
}
