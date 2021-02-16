// max sum inc subseuence
#include<bits/stdc++.h>
using namespace std;

int solve(int a[],int n)
{
	
	int dp[n];
	
	dp[0]=a[0];
	int ovmx=INT_MIN;
	for(int i=1;i<n;i++)
	{
		int mx=INT_MIN;
		for(int j=0;j<i;j++)
		{
			if(a[i]>=a[j])
			{
				mx=max(mx,dp[j]);
			}
		}
		dp[i]=a[i]+mx;
		if(ovmx<dp[i])
		ovmx=dp[i];
	}
	
	return ovmx;
}

int main()
{
	
	int a[]={1,101,2,3,100,4,5};
	int n=sizeof(a)/sizeof(a[0]);
	
	cout<<solve(a,n);
	
	// nice
}
