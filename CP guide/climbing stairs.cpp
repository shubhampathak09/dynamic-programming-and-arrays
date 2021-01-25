 
#include<bits/stdc++.h>
using namespace std;


 //n
 //dp[n-1] +dp[n-2]+dp[n-3];
 
 // base case
 
 //3 dp[2]+dp[1]+dp[0];
 
// dp[0]=0;
 
 //dp[1]=1+dp[0]
 //d[2]=1+dp[1]=2
 //dp[3]=1+dp[2]=3
 
int countways(int n)
{
	
	int dp[n+1];
	
	dp[0]=0;
	
	//dp[4]=dp[1]+dp[2]+dp[3]
	      // 1 3  2 2  3 1
	for(int i=1;i<=n;i++)
	{
		if(i<=3)
		dp[i]=1+dp[i-1];
		else
		dp[i]=dp[i-3]+dp[i-2]+dp[i-1];
	}
    
	return dp[n];	
 }

 int main()
 {
 	
 	int n=7;
 	
 	cout<<countways(10);
 	
  } 
  
  // needs review
  // incorrect
  
