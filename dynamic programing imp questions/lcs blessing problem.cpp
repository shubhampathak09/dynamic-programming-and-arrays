// spoj aloknath and blessing

#include<bits/stdc++.h>
using namespace std;

string lcs(string s1,string s2)
{
	
	
	int n=s1.length();
	int m=s2.length();
	
	
	int dp[n+1][m+1];
	
	
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=m;j++)
		{
			if(i==0||j==0)
			dp[i][j]=0;
			
			else if(s1[i-1]==s2[j-1])
			{
				dp[i][j]=1+dp[i-1][j-1];
			}
			else 
			dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
		}
	}
	string res="";
	
	int i=n,j=m;
	
	while(i>0&&j>0)
	{
		if(s1[i-1]==s2[j-1])
		{
			res.push_back(s1[i-1]);
			i--;
			j--;
		}
		else if(dp[i-1][j]>dp[i][j-1])
		{
			i--;
		}
		else if(dp[i][j-1]>dp[i-1][j])
		{
			j--;
		}
	}
	
		reverse(res.begin(),res.end());
   
   return res;
}

int main()
{
	
	string s1="asdf";
	string s2="asdf";
	
	string ls=lcs(s1,s2);
	
	int k=3;
	
	int bless=0;
	for(int i=ls.length()-1;i>=ls.length()-k;i--)
	{
		bless+=(int)ls[i];
	}
	
	cout<<bless;
	
	// for single lcs only in 2 string
	
//	in case we multiple lcs of k length that is mjultiple lcs of n length
//	then wee need bfs to keep track of all such lcs and then find the max blessing
	
}
