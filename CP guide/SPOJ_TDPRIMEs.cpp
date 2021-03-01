/*
The problem statement is really simple. You are to write all primes less 
than 10^8

Input
There is not input

Output
To make the problem less output
 related write out only
 the 1st, 101st, 201st, ... 1st
  mod 100.*/
  
  
//TDPRIMES - Printing some primes  

#include<bits/stdc++.h>
using namespace std;

int maxN=100000000;
int a[100000001];

bool isprime[100000001];

void sieve()
{
	
	for(int i=0;i<=maxN;i++)
	isprime[i]=1;
	
	isprime[0]=0;
	isprime[1]=0;
	
	for(int i=2;i*i<=100000001;i++)
	{
		if(isprime[i])
		{
			for(int j=i*i;j<=maxN;j=j+i)
			{
			isprime[j]=0;	
			}
		}
	}
}



int main()
{
set<int>some;
for(int i=1;i<=100000000;i+=i*100+1)
{
	some.insert(i);
}
	
sieve();
int ct=0;
for(int i=2;i<=100000000;i++)
{
	
	if(isprime[i])
	{
		ct++;
		if(some.find(ct)!=some.end())
		cout<<i%100<<endl;
	}
	
	}	
}
