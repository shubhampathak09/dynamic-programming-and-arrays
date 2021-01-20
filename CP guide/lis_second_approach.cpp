// lis interesting approach

#include<bits/stdc++.h>
using namespace std;


int lis(vector<int>a,vector<int>b)
{
	int n=a.size();
	
	int m=b.size();
	
	int dp[n+1][m+1];
	
	
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=m;j++)
		{
			if(i==0||j==0)
			dp[i][j]=0;
			
			else if(a[i-1]==b[j-1]) // what happens when array contains the duplicates ?? code fails but o/w interesting approach
			dp[i][j]=1+dp[i-1][j-1];
			
			else
			dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
		}
	}
	
    return dp[n][m];
}

int main()
{

vector<int>a={10,22,9,33,21,50,41,60,80};

vector<int>b=a;

sort(b.begin(),b.end());

cout<<lis(a,b);	
	
	
}
