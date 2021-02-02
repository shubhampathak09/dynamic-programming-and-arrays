// sum in set simple recursive solution
#include<bits/stdc++.h>
using namespace std;

bool check(int a[],int n,int sum)
{

if(sum==0)
{
	return true;
	}	

if(n==0)
{
	return false;
}
// consider all base cases ither wise srgmentation fault
return check(a,n-1,sum)||check(a,n-1,sum-a[n-1]); 
	
}


int main()
{
	
int a[]={1,5,11,5};

int n=sizeof(a)/sizeof(a[0]);

cout<<check(a,n,21);	
	
}
