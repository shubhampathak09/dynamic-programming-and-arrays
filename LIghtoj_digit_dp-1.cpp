
// light oj dp problem

#include<bits/stdc++.h>
using namespace std;



int dp[12][12];

int go(int n,vector<int> s,int pos=0,int prev=0)
{

    int res=0;
    
	if(dp[pos][prev]!=-1)
	return dp[pos][prev];
    
	if(pos==n)
	{
		return 1;
	}
	
	for(int j=0;j<s.size();j++)
	{
		if(prev==0||(abs(prev-s[j])<=2))
		{
		res+=go(n,s,pos+1,s[j]);	
		}
		}
		return dp[pos][prev]=res;	
}   


int main()
{
	// n digit number
	// m is digits in set
	
	
	int T;
	cin>>T;
	
	while(T--)
	{
	
	
	int m,n;
	cin>>m>>n;
	vector<int>v(m);
	
	for(int i=0;i<m;i++)
	cin>>v[i];
	
	
	memset(dp,-1,sizeof(dp));
	
	int ans=go(n,v);
	
	cout<<ans<<endl;
}
}

