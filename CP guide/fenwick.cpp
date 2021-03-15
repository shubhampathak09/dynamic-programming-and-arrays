#include<bits/stdc++.h>
using namespace std;

const int emax=100000001;

int n;

int bitse[emax];

int sum(int i)
{
	// sum from 1 to i;
	int ans=0;
	while(i>0)
	{
		ans+=bitse[i];
		i-=i&(-i);
	}
}

void update(int i,int x)
{
	
	while(i<=n)
	{
		bitse[i]+=x;
		i-=(i&(-i));
	}
}

int main()
{
	
	int a[]={1,2,3,4};
	
	int n=sizeof(a)/sizeof(a[0]);
	
	for(int i=1;i<=n;i++)
	update(i,a[i]);
	
	cout<<sum(5);
 
	
	//shit
	
	
}
