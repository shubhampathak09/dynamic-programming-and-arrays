// longest increasing subseuence
// orignal approach
#include<bits/stdc++.h>
using namespace std;

int inc_sub(int a[],int n)
{
	
	int dp[n];
	
	//dp[0]=1;
	
	 for(int i=0;i<n;i++)
	 dp[i]=1;
	 if(a[1]>a[0])
	 dp[1]=2;
	 
//	bool flag=false;
	for(int i=2;i<=n-1;i++)
	{
		if(a[i]>a[i-1])
		{
			dp[i]=max(dp[i-1]+1,1+dp[i-2]);
		}
		else
		{
			for(int j=i-2;j>=0;j--)
			{
				if(a[i]>a[j])
				{
					dp[i]=dp[j]+1;
				//	flag=true;
					break;
				}
			}
			
		}
	}
    
//    for(int i=0;i<n;i++)
//    {
//    	cout<<dp[i]<<" ";
//	}
    
	return dp[n-1];	
}

int main()
{
	
	
//int a[]={12,34,1,5,40,80};	

int a[]={22,9,33,21,50,41,60,80};
 
//int a[]={1,1,1,1}; 


int n=sizeof(a)/sizeof(a[0]);

cout<<inc_sub(a,n);
	
}
