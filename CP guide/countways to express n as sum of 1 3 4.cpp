// given find the number of diff ways to express  n as sum 1 3 4

#include<bits/stdc++.h>
using namespace std;


int countways(int n)
{
	
	if(n==0)
	return 1;
	
	if(n<0)
	return 0;
	
	return countways(n-1) +countways(n-3) +countways(n-4);
	
}
int main()
{
	
	cout<<countways(5);
}
