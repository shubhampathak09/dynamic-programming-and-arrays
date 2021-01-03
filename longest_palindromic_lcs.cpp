// agbcba

// abcbga

#include<bits/stdc++.h>
using namespace std;


int lcs(string s1,string s2)
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
			dp[i][j]=1+dp[i-1][j-1];
			else
			dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
		}
	}
	return dp[n][m];
}

 

void swap(char *x,char *y)
{
	char *temp=x;
	*x=*y;
	*y=*temp;
}

/*string reverse_string(string s1)
{
	int l=s1.length();
	int m=s1.length()/2;  //abcdf  abcd
	for(int i=0;i<m;i++)
	{
		swap(&s1[i],&s1[l-1-i]);
	}
	
	return s1;
}
*/
int main()
{
	
	string s1="geeksforgeeks";
	
	string s2=s1;
	
	reverse(s2.begin(),s2.end());
	
	
	cout<<lcs(s1,s2);
	 
}
