// number of ways to decode a string

#include<bits/stdc++.h>
using namespace std;


int solve(string s)
{
	
	int n=s.length();   //234009
	
	int dp[n];
	
	dp[0]=1;
	
	for(int i=1;i<n;i++)
	{
		if(s[i]-'0'==0&&s[i-1]-'0'==0)      //00
		dp[i]=0;
		else if(s[i]-'0'==0&&s[i-1]-'0'!=0)  // x0
		{
			if(s[i-1]-'0'==1||s[i-1]-'0'==2)
			{
		    if(i==1)
			dp[i]=1;
			else 	
			dp[i]=dp[i-2];
		}
			else
			dp[i]=0;
		}
		else if(s[i]-'0'!=0&&s[i-1]-'0'==0)  //0x
		{
			dp[i]=dp[i-1];
		}
		else
		{
			                        //xx
			dp[i]=dp[i-1];
			if(stoi(s.substr(i-1,2))<=26)
			{
				if(i==1)
				dp[i]=1;
				else
				dp[i]+=dp[i-2];
			}                        
		}
	}
	return dp[n-1];
}

int main()
{
	
	string s="21123";
	
	cout<<solve(s);
}
