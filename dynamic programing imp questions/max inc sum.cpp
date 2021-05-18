#include<bits/stdc++.h>
using namespace std;

int max_inc(int a[],int n)
{
	
	int dp[n];
	
	dp[0]=a[0];  // max sum
	
	int msum=INT_MIN;
	
	for(int i=1;i<n;i++)
	{
		int sumsofar=INT_MIN;
		for(int j=0;j<i;j++)
		{
			if(a[i]>a[j])
			{
				
				sumsofar=max(sumsofar,dp[j]);
			}
		}
		if(sumsofar==INT_MIN)
		dp[i]=a[i];
		else
		dp[i]=sumsofar+a[i];
		
		if(dp[i]>msum)
		msum=dp[i];
		
	}
	
	

	return msum;
	
	
}

int main()
{
	
	
		int a[]={10,22,9,33,21,50,41,60,80};
	
	     int n=sizeof(a)/sizeof(a[0]);


   cout<<max_inc(a,n);
   	
}
