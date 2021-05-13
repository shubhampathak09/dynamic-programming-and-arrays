#include<bits/stdc++.h>
using namespace std;


void sieve()
{
	
	int n=101;
	int isprime[n];
	
	for(int i=0;i<101;i++)
	isprime[i]=1;
	
	isprime[0]=isprime[1]=0;
	
	for(int i=2;i<=sqrt(100);i++)
	{
		
		for(int j=i*i;j<=100;j=j+i)
		isprime[j]=0;
	}
	int cnt=0;
	for(int i=2;i<=100;i++)
	{
		if(isprime[i])
		{
		cnt++;
		cout<<i<<endl;
	}
	}
	cout<<cnt;
}

// o(log(log(n))
int main()
{
	
	sieve();
	
}
