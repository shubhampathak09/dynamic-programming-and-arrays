/*Partition problem is to
determine whether a given set
can be partitioned into two
subsets such that the sum of
elements in 
both subsets is the same. */

// first thing just determine->Yes or no


// Sample I/O:-

//arr[] = {1, 5, 11, 5}

// Yes -> {1,5,5} &{11}


#include<bits/stdc++.h>
using namespace std;

int partition(int a[],int n,int sum)
{
	
int dp[n+1][sum+1];

for(int i=0;i<=sum;i++)
{
	dp[0][i]=0;
}
for(int i=0;i<=n;i++)
{
	dp[i][0]=1;
}
for(int i=1;i<=n;i++)
{
	
	
	for(int j=1;j<=sum;j++)
	{
		if(a[i-1]<=j)
		{
			dp[i][j]=dp[i-1][j]||dp[i-1][j-a[i-1]];
		}
		else
		dp[i][j]=dp[i-1][j];
	
	}
	}	
	
	return dp[n][sum];
}

int main()
{
	
//int a[]={1,5,11,5};
int a[]={1,5,3};

int n=sizeof(a)/sizeof(a[0]) ;
int sum=0;

for(int i=0;i<n;i++)
{
	sum+=a[i];
	}	

if(sum%2!=0)
{
	cout<<"Not possible";
}
else
cout<<partition(a,n,sum/2);
	
}
