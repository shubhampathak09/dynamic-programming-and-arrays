// lis

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int arr[]={3,10,2,1,20};
	int n=sizeof(arr)/sizeof(arr[0]);
	
	int dp[n];
	
	dp[0]=1;
	
	int ovmax=INT_MIN;
	
	for(int i=1;i<n;i++)
	{
		int mx=1;
		for(int j=0;j<i;j++)
		{
	     if(arr[i]>arr[j])
		 mx=max(mx,dp[j]);		
		}
		dp[i]=mx+1;
		if(ovmax<dp[i])
		ovmax=dp[i];
	}
    
	
	cout<<"Lis is.."<<ovmax;
		
}

