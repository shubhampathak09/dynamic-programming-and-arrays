// longest inc subseyence

#include<bits/stdc++.h>
using namespace std;

int solve(int a[],int n)
{
	
	int dp[n];
//	memset(dp,1,sizeof(dp));   wtf is here man
	for(int i=0;i<n;i++)
	dp[i]=1;
	
	int overall_max=1;
	
//	cout<<a[0]<<a[1];
	
	for(int i=1;i<n;i++)
	{
	//	cout<<"sdvf";   // got fucked by warning here.......fucks sizeof(a)/sizeof(a)
	//	cout<<a[i]<<" ";
	//	int max_here=1;
		//cout<<a[0]<<a[1];
		for(int j=0;j<i;j++)
		{
			//cout<<a[j]<<a[i];
			if(a[j]<=a[i])
			{  
			    if(dp[i]<1+dp[j])
				dp[i]=1+dp[j];
				
			}
			
			 
		}
		
		if(overall_max<dp[i])
		{
			overall_max=dp[i];
		}
		
	}
	
//	for(int i=0;i<n;i++)
//	{
//		cout<<dp[i]<<" ";
//	}
	
	return overall_max;
}

int main()
{
	
	int a[]={3,10,2,1,20};
	
    int n=5;
	
	cout<<solve(a,n);
	
	
	// new concept memset oncly work for values 0 and -1 it wont work when trying to set to other integral
	// values
	// this was mistake happening before:p
}
