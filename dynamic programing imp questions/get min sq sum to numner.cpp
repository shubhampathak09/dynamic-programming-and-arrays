#include<bits/stdc++.h>
using namespace std;

int dp[100001];

int getminsq(int n)
{
	// when n itself is perfect sq
	if(sqrt(n)-floor(sqrt(n))==0)  // condition to check if n is perfect sq
	return 1;
	
	if(dp[n]!=-1)
	return dp[n];
	
	if(n<=3)
	return dp[n]=n;
	
	
	
	int res=n;
	
	for(int x=1;x<=n;x++)
	{
		int temp=x*x;
		
		if(temp>n)
		break;
		else
		res=min(res,1+getminsq(n-temp));
	}
	
	return dp[n]=res;
}


int main()
{
	
memset(dp,-1,sizeof(dp));	
cout<<getminsq(12)<<endl;

cout<<getminsq(13);	
	
}
 
