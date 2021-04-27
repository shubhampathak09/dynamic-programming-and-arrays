// fing largest prime factor

#include<bits/stdc++.h>
using namespace std;


int main()
{
	
	
	int n=96;
	
	int maxprime=-1;
	
	while(n%2==0)
	{
		maxprime=2;
		n=n/2;
		
	}
	
	for(int i=3;i<=sqrt(n);i+=2)
	{
		while(n%i==0)
		{
			maxprime=i;
			n=n/i;
		}
	}
	if(n>2)
	{
		maxprime=n;
	}
	
	
	cout<<maxprime;
}


//cool
