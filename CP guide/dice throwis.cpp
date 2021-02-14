// dice throw problem

#include<bits/stdc++.h>
using namespace std;

int countthrows(int n)
{
	
	int dp[n+1];
	dp[0]=1;
	
	for(int i=1;i<=n;i++)
	{
		int ct=0;
		for(int j=1;j<=6;j++)
		{
			if(j>i)
			{
				break;
			}
			else if(j<=i)
			{
				ct+=dp[i-j];
			//	dp[i]=ct;
			}
			dp[i]=ct;
	}
}
	return dp[n];
}

int main() 
{
	int n=5;
	cout<<countthrows(n);
	
}
