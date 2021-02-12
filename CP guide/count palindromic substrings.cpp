#include<bits/stdc++.h>
using namespace std;

//abcd
// fuck this question
int count_palindromic_substrings(string s)
{
	
	int n=s.length();
	
	bool dp[n][n];
	int ct=0;
	for(int g=0;g<n;g++)
	{
		
		for(int i=0,j=g;j<n;i++,j++)
		{
			if(g==0)
			dp[i][j]=0;
			else if(g==1)
			{	
				//cout<<1;
				//cout<<s[i]<<" "<<s[j];
				if(s.substr(i,2)==s.substr(j-1,2))
				{
					
					dp[i][j]=1;
				}
				else
				dp[i][j]=0;
			}
			else
			{
				if(s[i]==s[j]&&dp[i+1][j-1]==1)
				dp[i][j]=1;
				else
				dp[i][j]=0;
			}
			
			if(dp[i][j]==1)
			ct++;
		}
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	}
	
	return ct;
}

int main()
{
	
	string s1="aba";    
	
	cout<<count_palindromic_substrings(s1);
}
