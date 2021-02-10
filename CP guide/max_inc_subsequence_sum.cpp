// max increasing sum subsequece

// {1,101,2,3,100,4,5}

#include<bits/stdc++.h>
using namespace std;

int solve(int a[],int n)
{
	int dp[n];
	for(int i=0;i<n;i++)
	dp[i]=a[i];
	
	int overall_max=dp[0];
	//{1,101,2,3,100,4,5}
	for(int i=1;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(a[j]<=a[i])
			{
				if(dp[i]<dp[i]+a[j])
				{
					dp[i]=dp[i]+a[j];
				}
			}
		}
		if(overall_max<dp[i])
		{
			overall_max=dp[i];
		}
	}
	
	for(int i=0;i<n;i++)
	{
		cout<<dp[i]<<" ";
	}
	return overall_max;
}


int main()
{
	
	int a[]={1,101,2,3,100,4,5};
	
	int n=sizeof(a)/sizeof(a[0]);
	
	cout<<solve(a,n);
}
