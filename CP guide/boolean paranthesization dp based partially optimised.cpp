// boolean parenthesization dp
#include<bits/stdc++.h>
using namespace std;

int dp[101][101][2];

int solve(string s,int i,int j,bool istrue)
{
	
	if(i>j)
	{
		return 0;
	}
	
	if(i==j)
	{
		if(istrue==true)
		{
			if(s[i]=='T')
			return true;
				else
		    return false;
		}
	    else if(istrue==false)
	    {
	    	if(s[i]=='F')
	    	return true;
	    	else
	    	return false;
		}
	}
	
	
	
	
	if(dp[i][j][istrue]!=-1)
	{
		return dp[i][j][istrue];
	}
	
	int ans=0;
	
	for(int k=i+1;k<j;k=k+2)
	{
		
		int lt=solve(s,i,k-1,1);
		int lf=solve(s,i,k-1,0);
		int rt=solve(s,k+1,j,1);
		int rf=solve(s,k+1,j,0);
		
		
		if(s[k]=='|')
		{
			if(istrue==1)
			{
				ans+=lt*rt+lf*rt+lt*rf;
			}
			else if(istrue==0)
			{
				ans+=lf*rf;
			}
		}
		else if(s[k]=='^')
		{
			if(istrue==1)
			{
				ans+=lf*rt+rf*lt;
			}
			else if(istrue==0)
			{
				ans+=lf*rf+lt*rt;
			}
		}
		else if(s[k]=='&')
		{
			if(istrue==1)
			{
				ans+=lt*rt;
			}
			else if(istrue==0)
			{
				ans+=lf*rt+lt*rf+lf*rf;
			}
		}
	}
	
	return dp[i][j][istrue]=ans;
	
}

int main()
{
	
	memset(dp,-1,sizeof(dp));
	
	//cout<<dp[0][0][0];
	
	string s="T|T&F^T";
	int n=s.length();
	
	cout<<solve(s,0,n-1,1);
	
	
}
