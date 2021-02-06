// min jump array

#include<bits/stdc++.h>
using namespace std;

int min_jumps(int a[],int n)
{
	
	
	int dp[n];
    
	for(int i=0;i<n;i++)
	dp[i]=INT_MAX;
	 	
	dp[0]=0;
	
	for(int i=1;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(i<=j+a[j])
			{
				dp[i]=min(dp[i],dp[j]+1);
			}
		}
	}
	
	return dp[n-1];
}

int main()
{
	
	int a[]={1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
	
	int n=sizeof(a)/sizeof(a[0]);
	
//	cout<<n;
	
	cout<<min_jumps(a,n);
	
}
