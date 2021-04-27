#include<bits/stdc++.h>
using namespace std;


int minsteps(int k)
{
	
	int dp[k+1];
	
	
	dp[0]=0;
	dp[1]=1;
	dp[2]=2;
	
	for(int i=3;i<=k;i++)
	{
		if(i&1)
		dp[i]=dp[i-1]+1;
		else
		dp[i]=dp[i/2]+1;
	}
	
	return dp[k];
}

int main()
{
	
	
	int k=12;
	
	cout<<minsteps(k);
	
}
//int main()
