// sparse tables
// z function
// bridges
//artiuclation points
// sieve
//--------------------------------------------------------------------------
//Input: 
//arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9}
//Output:
// 3 (1-> 3 -> 8 -> 9)

//Explanation: Jump from 1st element 
//to 2nd element as there is only 1 step, 


#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	int a[]={1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
	int n=sizeof(a)/sizeof(a[0]);
    
	
	int dp[n];
	
	dp[n-1]=0;
	
	for(int i=n-2;i>=0;i--)
	{
		if(a[i]==0)
		dp[i]=INT_MAX;
		else
		{
		
		int mini=INT_MAX;
		for(int j=1;j<=a[i]&&i+j<n;j++)
		{
			mini=min(mini,dp[i+j]);
		}
		dp[i]=1+mini;
		}	
	}
	if(dp[0]==INT_MAX)
	{
		cout<<"No path exists";
	}
	else
	{
	
		cout<<dp[0];
	}
	
}
