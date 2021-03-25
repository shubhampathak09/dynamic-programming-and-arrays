#include<bits/stdc++.h>
using namespace std;


void solve()
{
	
	
	int a[]={1,2,3,4};
	
	int n=sizeof(a)/sizeof(a[0]);
	
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			cout<<a[i]<<" "<<a[j]<<endl;
		}
	}
	
}

int main()
{
	
	
	solve();
}
