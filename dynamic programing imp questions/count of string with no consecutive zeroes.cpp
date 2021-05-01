#include<bits/stdc++.h>
using namespace std;

int count(int n)
{
	
	int dp1[n+1];  // end at 1
	int dp2[n+1]; // end at 0
	
	
	dp1[0]=dp2[0]=0;
	
	
	dp1[1]=dp2[1]=1;
	
	
	for(int i=2;i<=n;i++)
	{
		dp1[i]=dp1[i-1]+dp2[i-1];
		dp2[i]=dp1[i-1];
	}
	
	
	return max(dp1[n],dp2[n]);
}

int main()
{
	
	
	cout<<count(7);
	
}
