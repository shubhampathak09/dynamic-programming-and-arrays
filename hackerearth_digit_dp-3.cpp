
// Benny Broken odometer digit d

#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll dp[11][2][2];

// return number of numbre between one to n that has 3

ll g(string s,ll pos=0,ll tight=1,ll flag=0)
{
	if(pos==s.length())
	{
		if(flag==1)
		return 1;
		else
		return 0;
	}
	else if(dp[pos][tight][flag]!=-1)
	return dp[pos][tight][flag];
    
	else if(tight==1)
	{
		ll res=0;
		for(int i=0;i<=s[pos]-'0';i++)
		{
			//if(i==3)
			ll flg=flag;
			if(i==3)
			flg=1;
			if(i==s[pos]-'0')
			{
				res+=g(s,pos+1,1,flg);
			}
			else
			{
				res+=g(s,pos+1,0,flg);
			}
		
		}
		
		return dp[pos][tight][flag]=res;
		}	
		
		else
		{
			// tight=0;
		    ll res=0;
			for(int i=0;i<=9;i++)
			{
				ll flg=flag;
				if(i==3)
				flg=1;
				res+=g(s,pos+1,0,flg);
			}
			
			return dp[pos][tight][flag]=res;
		}
}

int main()
{
	
//	int a[]={1,2,4,5,6,7,8,9,10,11,12,14,15,16,17,18,19,20,21,22,24,25,26,27,28,29,40,41,42,44,45,46,47,48,49,50,51,52,54,55,56,57,58,59,60,61,62,64,65,66,67,68,69,70,71,72,74,75,76};
	
//	int n=sizeof(a)/sizeof(a[0]);
	
//	cout<<n;

int T;
cin>>T;

while(T--)
{

ll n;

cin>>n;

string s=to_string(n);

memset(dp,-1,sizeof(dp));

ll x=g(s);	   // count number of 3s in number n 

cout<<n-x;

}

}
