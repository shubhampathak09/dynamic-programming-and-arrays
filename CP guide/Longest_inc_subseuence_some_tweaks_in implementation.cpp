// longest increasing subsequence

#include<bits/stdc++.h>
using namespace std;


int solve(int a[],int n)
{
	
	
	int dp[n];
	
	dp[0]=1;
	
	int ovmax=INT_MIN;
	for(int i=1;i<n;i++)
	{
		int len=0;
		
		for(int j=0;j<i;j++)
		{
			if(a[i]>a[j])
			len=max(len,dp[j]);
		}
		dp[i]=len+1;
		if(ovmax<len)
		{
			ovmax=len;
		}
	}
	
	return ovmax;
}

int main()
{
	
	int a[]={1,11,2,10,4,5,2,1};
	
	int n=sizeof(a)/sizeof(a[0]);
	
	cout<<solve(a,n);
	
}
