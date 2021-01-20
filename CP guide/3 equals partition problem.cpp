// 3parition

#include<bits/stdc++.h>
using namespace std;


bool partition(int a[],int sum)
{
	int n=sizeof(a)/sizeof(a[0]);
	
	int dp[n+1][sum+1];
	
    for(int i=0;i<=n;i++)
    dp[i][0]=1;
    for(int i=1;i<=sum;i++)
    dp[0][i]=0;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=sum;j++)
		{
			if(a[i-1]<=j)
			{
				dp[i][j]=dp[i-1][j-a[i-1]]||dp[i-1][j];
			}
			else
			dp[i][j]=dp[i-1][j];
		}
	}
	
	return dp[n][sum];
}

int main()
{
	
int s[]={7,3,2,1,5,4,8};

int n=sizeof(s)/sizeof(s[0]);

int sum=0;

for(int i=0;i<n;i++)
{
	sum+=s[i];
}

int target=sum/3;

if(partition(s,target)==1)
{
	cout<<"YES";
 }
 else
 {
 	cout<<"NO";
  }
}
