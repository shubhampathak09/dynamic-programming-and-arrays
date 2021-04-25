// count stair path
#include<bits/stdc++.h>
using namespace std;

int dp[10001];

int countpaths(int n)
{
	if(n==0)
	return 1;
	else if(n<0)
	return 0;
	
	if(dp[n]!=-1)
	return dp[n];
	
	int path1=countpaths(n-1);
	int path2=countpaths(n-2);
	int path3=countpaths(n-3);
	
	return dp[n]=path1+path2+path3;
	
}

int main()
{
	
	
	memset(dp,-1,sizeof(dp));
	
	cout<<countpaths(4);
}
