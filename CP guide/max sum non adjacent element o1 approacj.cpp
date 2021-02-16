// max sum adjacent elements
#include<bits/stdc++.h>
using namespace std;

int solve(int a[],int n)
{
	
	int inc=a[0];
	int exc=0;
	
	for(int i=1;i<n;i++)
	{
		int newinc=a[i]+exc;
		int newexc=max(inc,exc);
		
		inc=newinc;
		exc=newexc;
	}
	return max(inc,exc);
}

int main()
{
	
	int a[]={5,5,10,40,50,35};
	int n=sizeof(a)/sizeof(a[0]);
	
	cout<<solve(a,n);
}
