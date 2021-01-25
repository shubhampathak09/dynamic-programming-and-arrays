// llap->length of longest arithmetic progression 

#include<bits/stdc++.h>

using namespace std;

int llap(int a[],int n)
{
	sort(a,a+n);
	
	int dp[n];
	
	int ans=INT_MIN;
	
	for(int i=0;i<n;i++)
	dp[i]=2;
	
	for(int j=n-2;j>=1;j--)
	{
		int i=j-1;
		int k=j+1;
		
		while(i>=0&&k<=n-1)
		{
			if(a[i]+a[k]==2*a[j])
			{
				dp[j]=max(dp[k]+1,dp[j]);
				ans=max(ans,dp[j]);
				i=i-1;
				k=k+1;
			}
			else if(a[i]+a[k]>2*a[j])
			{
				i=i-1;
			}
			else
			{
				k=k+1;
			}
		}
	}
	return ans;
}

int main()
{
	
	int a[]={9,4,7,2,10};
	
	int n=sizeof(a)/sizeof(a[0]);
	
	cout<<llap(a,n);
}

