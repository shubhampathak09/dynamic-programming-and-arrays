// spoj
// sieve of eratosthenese
//  cp algorithms
// nloglogn run time o(1) acces time

#include<bits/stdc++.h>
using namespace std;

int maxn=100000;
bool isprime[100001];
void sieve()
{
	
for(int i=0;i<=maxn;i++)
isprime[i]=1;

isprime[0]=0;
isprime[1]=0;


for(int i=2;i*i<=maxn;i++)
{
	if(isprime[i])
	{
		for(int j=i*i;j<=maxn;j+=i)
		{
			isprime[j]=0;
		}
	}
	}	
	
}


int main()
{
	
	sieve();
	
//	cout<<isprime[2];
//	cout<<isprime[8];
	
//	cout<<isprime[61];
	
//	cout<<isprime[17];
	
int l=1;
int r=100;	
for(int i=l;i<=r;i++)
{
	if(isprime[i])
	{
		cout<<i<<endl;
	}
		}		
}
