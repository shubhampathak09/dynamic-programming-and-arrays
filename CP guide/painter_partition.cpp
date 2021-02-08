// painter partition problem 
#include<bits/stdc++.h>
using namespace std;

int dp[101][101];

int sum(int a[],int i,int j)
{
	int s=0;
	
	for(int k=i;k<=j;k++)
	{
		s+=a[k];
	}
	return s;
}

int solve(int a[],int n,int k)
{
	
	if(n==1)
	return a[0];
	
	if(k==1)
	return sum(a,0,n-1);
	
	if(dp[n][k]!=-1)
	return dp[n][k];
	
	int min_best=INT_MAX;
	
	for(int i=1;i<=n;i++)
	{
	   int temp=max(solve(a,i,k-1),sum(a,i,n-1));
	   min_best=min(min_best,temp); 
	  // cout<<min_best<<endl;
	}
	return dp[n][k]=min_best;
}

int main()
{
	
	int k=2;
	
	int a[]={10,10,10,10};
	
	int n=sizeof(a)/sizeof(a[0]);
	
	memset(dp,-1,sizeof(dp));
	
	//cout<<n;
	
	cout<<solve(a,n,k);
}
