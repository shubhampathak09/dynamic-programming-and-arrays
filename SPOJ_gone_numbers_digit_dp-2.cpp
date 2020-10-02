
// SPOJ G-one numbers

// digit dp gone numners

#include<bits/stdc++.h>
using namespace std;

#define ll long long 

// 8 digits :- max sum 72

ll prime[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,49,53,57,59,61,67,71,73};    // storing prime numbers till 

ll dp[10][90][2];  // pos sum tight

bool checkprime(ll a)
{
	for(auto x:prime)
	if(x==a)
	return true;
	
	return false;
	
}

ll g(string s,ll pos=0,ll sum=0,ll tight=1)
{
	if(pos==s.length())
	{
		if(checkprime(sum))
		{
			return 1;
		}
		else
		return 0;
	}
	else if(dp[pos][sum][tight]!=-1)
	return dp[pos][sum][tight];
	
	else if(tight==1)
	{
		ll res=0;
		for(ll i=0;i<=s[pos]-'0';i++)
		{
			if(i==s[pos]-'0')
			{
				res+=g(s,pos+1,sum+i,1);
			}
			else
			{
				res+=g(s,pos+1,sum+i,0);
			}
			
		}
		dp[pos][sum][tight]=res;
		return res;
		
		}
		
		else
		{
			ll res=0;
			for(ll i=0;i<=9;i++)
			{
				res+=g(s,pos+1,sum+i,0);
			}
			dp[pos][sum][tight]=res;
			return res;
			
			}	
		
}


int main()
{
	
//	cout<<checkprime(67);

int T;

cin>>T;

while(T--)
{


int l,r;

cin>>l>>r;

l--;

memset(dp,-1,sizeof(dp));
string a=to_string(l);
string b=to_string(r);

int ans1=g(a);

//cout<<ans1;

memset(dp,-1,sizeof(dp));

int ans2=g(b);

cout<<ans2-ans1;

cout<<endl;	
}
}
