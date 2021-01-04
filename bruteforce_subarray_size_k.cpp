//max sum subarray size k brute force

#include<bits/stdc++.h>
using namespace std;

int sumarray(int a[],int n,int k)

{
	// lest dry run for k=2;
	int maxsum=INT_MIN;
	for(int i=0;i<=n-k;i++)
	{
		int sum=0;
		for(int j=0;j<k;j++)
		{    
		     sum+=a[i+j];
			 maxsum=max(sum,maxsum);
		}
	}
	
	return maxsum;
}
int main()
{
	
	int a[]={100,200,300,400};
	
	int n=sizeof(a)/sizeof(a[0]);
	
	int k=2;
	
	
	cout<<sumarray(a,n,k);
}
