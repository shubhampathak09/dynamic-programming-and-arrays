#include<bits/stdc++.h>
using namespace std;

int solve(int n)
{
	
	// 2  3  4 5
	int dp[n+1];
	
	for(int i=0;i<=n;i++)
	dp[i]=0;
	
	dp[1]=0;
	dp[2]=1;
	dp[3]=1;
	dp[4]=1;
	dp[5]=1;
	
	for(int i=6;i<=n;i++)
	{
		//int temp=i;
		
		for(int j=2;j<=5;j++)
		{
		    if(i%j==0)
		    {
		    	dp[i]+=dp[j];
		    	j=i/j;
			}
		 	else
		 	continue;
			}
		}
		
	return dp[n];	
	}
	


int main()
{
	
	
	int n=10;
	
	cout<<solve(n);
	
}

// fml
