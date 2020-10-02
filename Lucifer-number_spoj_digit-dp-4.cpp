


// Lucifer number SPOJ
/*
Input:

5
200 250
150 200
100 150
50 100
0 50

 Output:

2
16
3
18
6
*/



#include<bits/stdc++.h>
using namespace std;

#define ll long long

//ll dp[pos][tight][odd_sum][even_sum]   pos =12, tight=2, odd_sum=60 even_sum=60
ll dp[12][2][60][60];
ll prime[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,57,59};
ll check_prime(int odd_sum,int even_sum,int length)
{ 
     ll x;
	if(length%2==0)
	{
		x=even_sum-odd_sum;
	}
	else
	x=odd_sum-even_sum;
	
	if(x<0)
	return 0;
	
	else
	{
	
	for(auto v:prime)
	{
		if(x==v)
		return 1;
	}
	return 0;
}

}

ll g(string s,ll pos=0,ll tight=1,ll odd_sum=0,ll even_sum=0)
{
if(pos>=s.length())
{
	 return check_prime(odd_sum,even_sum,s.length());
	}
	
	else if(dp[pos][tight][odd_sum][even_sum]!=-1)
	return dp[pos][tight][odd_sum][even_sum];
		
else if(tight==1)
{
	ll res=0;
	for(int i=0;i<=s[pos]-'0';i++)
	{
		int od=odd_sum,ev=even_sum;
		if(pos%2==1)
		{
			od+=i;
		}
		else
		{
			ev+=i;
		}
		
		if(i==s[pos]-'0')
		{
			res+=g(s,pos+1,1,od,ev);
		}
		else
		{
			res+=g(s,pos+1,0,od,ev);
		}
	}
	
	return dp[pos][tight][odd_sum][even_sum]=res;
	
	}	
	
	else
	{
		ll res=0;
		
		for(int i=0;i<=9;i++)
		{
			int od=odd_sum,ev=even_sum;
			
			if(pos%2==1)
			{
				od+=i;
			}
			else
			{
				ev+=i;
			}
			
			res+=g(s,pos+1,0,od,ev);
		}
		
		
		return dp[pos][tight][odd_sum][even_sum]=res;
	}
	
}

int main()
{
	int T;
	cin>>T;
	
	
	while(T--)
	{
	
	
	ll l,r;
	
	cin>>l>>r;
	
	l--;
	
	string a=to_string(l);
	
	string b=to_string(r);
	
	memset(dp,-1,sizeof(dp));
	
	ll ans1=g(a);
	
	memset(dp,-1,sizeof(dp));
	
	ll ans2=g(b);
	
	cout<<ans2-ans1<<endl;
	
}
	
}
