
#include<bits/stdc++.h>
using namespace std;


int lookup[1001];

int fib(int n)
{
	
	int dp[n+1];
	
	dp[0]=0;
	dp[1]=1;
	
	for(int i=2;i<=n;i++)
	dp[i]=dp[i-1]+dp[i-2];
	
	return dp[n];
}

// think about recursive code first then solve
// smaller to bigger subproblem always

int fib2(int n)
{
	
	if(n==0||n==1)
	return n;
	
	if(lookup[n]!=-1)
	return lookup[n];
	
	return lookup[n]=fib2(n-1)+fib2(n-2);
}


int main()
{
	
	int n=2;
	
	
//	int lookup[n+1];
	
	memset(lookup,-1,sizeof(lookup));
	
//	cout<<lookup[0];


 int   ans=fib(3); 
   
   int ans1=fib2(3);
   
   cout<<ans<<" "<<ans1;
}
// practice variations on fibonacci dp


