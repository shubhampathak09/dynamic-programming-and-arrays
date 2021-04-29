#include<bits/stdc++.h>
using namespace std;
/*
 View as PDF
Submit solution
All submissions
Best submissions
Points:10 (partial)
Time limit:1.0s
Memory limit:32M
Problem type
A palindrome is a symmetrical string, that is, a string read identically from left to right as well as from right to left. You are to write a program which, given a string, 
determines the minimal number
 of characters to be inserted 
 into the string in order to 
 obtain a palindrome.
 
 */
 
 
 //IOI '00 p1-palindrome

//As an example, by inserting 2 characters, the string Ab3bd can be transformed into a palindrome (dAb3bAd or Adb3bdA). However, inserting fewer than 2 characters does not produce a palindrome.


int solve(int n,string s)
{
	
	string s1=s;
	string s2=s;
	
	reverse(s2.begin(),s2.end());
	
	int dp[n+1][n+1];
	
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=n;j++)
		{
			
			if(i==0||j==0)
			dp[i][j]=0;
			else if(s1[i-1]==s2[j-1])
			dp[i][j]=1+dp[i-1][j-1];
			else
			dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
		}
	}
	return dp[n][n];
}

int main()
{
	
	string s="Ab3bd";
	
	int n=s.length();
	
    int ans=solve(n,s);   	// stores the lcs
	
	// min characters need to add will be n-lcs
	
	cout<<n-ans;
}

