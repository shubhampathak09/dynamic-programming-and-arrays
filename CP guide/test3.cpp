#include<bits/stdc++.h>
using namespace std;

// target sum dunamic programming
#include<bits/stdc++.h>
using namespace std;

int solve(int a[],int n,int sum)
{
	bool dp[sum+1][n+1];
	
	 for(int i=0;i<=sum;i++)
	 {
	 	dp[i][0]=0;
	 }
	 for(int i=0;i<=n;i++)
	 {
	 	dp[0][i]=1;
	 }
	 for(int i=1;i<=sum;i++)
	 {
	 	for(int j=1;j<=n;j++)
	 	{
	 		if(a[j-1]<=i)
	 		{
	 			dp[i][j]=dp[i-a[j-1]][j-1]+dp[i][j-1];
			 }
			 else
			 dp[i][j]=dp[i][j-1];
		 }
	 }
	 return dp[sum][n];
}

int main()
{
	int a[]={4,2,7,1,3};
	
	
	int n=sizeof(a)/sizeof(a[0]);
	
	cout<<solve(a,n,100);
	
}
