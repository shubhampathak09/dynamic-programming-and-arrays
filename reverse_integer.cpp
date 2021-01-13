#include<bits/stdc++.h>
using namespace std;


int reverse(int n)
{
	int s=0;
	while(n!=0)
	{
		s=s*10+n%10;
		n=n/10;
		
	}
	return s;
}
// dosent handle overflows pls look this once you know about it
int main()
{
	cout<<reverse(312);
}
