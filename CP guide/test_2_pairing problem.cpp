// Bell numbers

//genric relatioon

//s(n,k)=s(n-1,k)*k+s(n-1,k-1);

//[ans=s(n,0)+s(n,1)+s(n,2)+..s(n,k)]

#include<bits/stdc++.h>
using namespace std;

int main()
{
	
int n=2;
int k=3;

int dp[k+1][n+1];

for(int i=0;i<=k;i++)
{
	for(int j=0;j<=n;j++)
	{
		if(i==0&&j==0)
		dp[i][j]=0;
		else if(i==0)
		dp[i][j]=0;
		else if(j==0)
		dp[i][j]=0;
		else if(i==j)
		dp[i][j]=1;
		else if(j<i)
		dp[i][j]=0;
		else
		dp[i][j]=dp[i][j-1]*i+dp[i-1][j-1];
	}
}
	cout<<dp[k][n];
	
	cout<<endl;
	
	int ans=0;
	
	
	for(int i=0;i<=n;i++)
	{
		ans+=dp[i][n];
	}
	// nice prroblem
	
	cout<<ans;// Also called Bell  Numbwr
}
