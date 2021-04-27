//#include<bits/stdc++.h>
//using namespace std;
//
//int dp[1001];
//
//int countways(int n)
//{
//		
//	if(n<=2)
//	return n;
//	
//	if(dp[n]!=-1)
//	return dp[n];
//	
//	int cn1=countways(n-1);
//	int cn2=countways(n-2);
//	
//	return dp[n]=cn1+cn2;
//	
//}
//
//int main()
//{
//	
//	memset(dp,-1,sizeof(dp));
//	
//	int ans=countways(84);
//	
//	cout<<ans;
//	
//	
//}



//fuck



#include<bits/stdc++.h>
using namespace std;



int main()
{
	
	long long n=84;
	
	
	
	long long dp[n+1];
	
    dp[0]=1;
    
	for(long long i=1;i<=n;i++)
	{
		if(i==1)
		{
			dp[i]=dp[i-1];
		}
		else
		dp[i]=dp[i-1]+dp[i-2];
	}
	
	cout<<dp[n];
}

// cool large input
