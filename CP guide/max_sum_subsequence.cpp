// max sum saubarray

#include<bits/stdc++.h>
using namespace std;

int max_sum_subsequence(int a[],int n)
{
	
	int dp1[n];
	int dp2[2];
	dp1[0]=a[0];
	dp2[0]=1;
	for(int i=1;i<n;i++)
	{
		//dp1[i]=max(a[i]+dp[i-1],dp1[i-1]);
		if(a[i]+dp1[i-1]>dp1[i-1])
		{
			dp1[i]=a[i]+dp1[i-1];
			dp2[i]=1+dp2[i-1];
		}
		else if(a[i]+dp1[i-1]<dp1[i-1])
		{
			dp1[i]=dp1[i-1];
			dp2[i]=dp2[i-1];
		}
		else
		{
			dp1[i]=dp1[i-1];
			dp2[i]=max(dp2[i-1],1+dp2[i-1]);
		}
	}
	
	cout<<dp1[n-1]<<" "<<dp2[n-1];
	
	return dp1[n-1];
}
int main()
{
	
	int a[]={1,2,-4,-2,3};
	int n=sizeof(a)/sizeof(a[0]);
	int ans=max_sum_subsequence(a,n);
}
