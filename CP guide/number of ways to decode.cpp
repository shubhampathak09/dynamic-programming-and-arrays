// number of ways to decode

#include<bits/stdc++.h>
using namespace std;


void solve()
{
	
	string s="1234";
	
	int n=s.length();
	
	int dp[n];
	
	
	dp[0]=1;
	
	for(int i=1;i<=n-1;i++)
	{
		
		if(s[i]-'0'==0&&s[i-1]-'0'!=0)   //x0
		{
			if(s[i-1]-'0'==1||s[i-1]-'0'==2)
			{
		    if(i>=2)	
			dp[i]=dp[i-2]+dp[i-1];
			else
			dp[i]=1;
		}
			else
			dp[i]=0;
		}
		else if(s[i]-'0'!=0&&s[i-1]-'0'==0)
		{
			dp[i]=dp[i-1];
		}
		else if(s[i]-'0'==0&&s[i-1]-'0'==0)
		{
			dp[i]=0;
		}
		else 
		{
			dp[i]=dp[i-1];
			if(stoi(s.substr(i-1,2))<=26)
			{
			//	cout<<stoi(s.substr(i-1,2))<<endl;
			if(i>=2)
			dp[i]+=dp[i-2];
			else
			dp[i]+=1;
		}
		}
	}
	
//	for(int i=0;i<n;i++)
//	cout<<dp[i]<<"\t";
	
	cout<<dp[n-1];
}

int main()
{
	
solve();	
	
} 
