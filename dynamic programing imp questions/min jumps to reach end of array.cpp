// min jump array

#include<bits/stdc++.h>
using namespace std;


// min jumps

#include<bits/stdc++.h>
using namespace std;




int main()
{
	
	
//int a[]={1,3,5,8,9,2,6,7,6,8,9};
	
	int a[]={ 1, 3, 6, 1, 0, 9 };
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
/*
int main()
{
	
	
	int a[]={ 1, 3, 6, 1, 0, 9 };
	
	int n=sizeof(a)/sizeof(a[0]);
	
	int dp[n];
	
	dp[n-1]=0;
	
	for(int i=n-2;i>=0;i--)
	{
		int res=INT_MAX;
		if(a[i]>0)
		{
		
			
			for(int j=1;j<=a[i];j++)
			{
				if(i+j<n)
				{
				//	if(dp[i+j]!=INT_MAX)
					res=min(res,dp[i+j]);
				}
			}
			dp[i]=res+1;
		}
		else 
		dp[i]=INT_MAX;
		
	}
	
 
    cout<<dp[0];
	
}*/
