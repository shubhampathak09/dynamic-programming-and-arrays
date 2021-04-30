// min jumps

#include<bits/stdc++.h>
using namespace std;




int main()
{
	
	
int a[]={1,3,5,8,9,2,6,7,6,8,9};

int n=sizeof(a)/sizeof(a[0]);

int dp[n];

dp[n-1]=0;



for(int i=n-2;i>=0;i--)
{
	int mn=INT_MAX; 
	for(int j=1;j<=a[i];j++)
	{
		if(i+j<n)
        mn=min(dp[i+j],mn);		
	}
	if(mn!=INT_MAX)
	dp[i]=mn+1;
	else dp[i]=INT_MAX;
	}	
	
	cout<<dp[0];
}
