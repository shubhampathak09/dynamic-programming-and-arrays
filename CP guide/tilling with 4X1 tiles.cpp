// tilling with 4X1 dominoses

#include<bits/stdc++.h>
using namespace std;


int solve(int n)
{
	
	if(n==1||n==2||n==3)
	return 1;
	
	if(n==4)
	return 2;
	
	return solve(n-1)+solve(n-4);
}

int main()
{
	
	int n=5;
	
	cout<<solve(n);
	
}
