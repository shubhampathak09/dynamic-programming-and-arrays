//
#include<bits/stdc++.h>
using namespace std;

int count(int n)
{
	
	int dp1[n+1];
	int dp0[n+1];
	
	memset(dp1,0,sizeof(dp1));
	memset(dp0,0,sizeof(dp0));
	
	dp1[1]=1;
	dp0[1]=1;
	
	for(int i=2;i<=n;i++)
	{
		dp1[i]=dp1[i-1]+dp0[i-1];
		dp0[i]=dp1[i-1];
	}
	
	return dp1[n]+dp0[n];
}

int main()
{
	
cout<<count(6);	
	
}
