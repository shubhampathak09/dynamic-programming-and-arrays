#include<bits/stdc++.h>
using namespace std;

int triplet_sum(int a[],int n,int k,int sum)
{
	if(n==0)
	{
		if(sum==0)
		return true;
		else
		return false;
	}
	
	if(k==0)
	{
		if(sum==0)
		return true;
		else
		return false;
	}

	//int s=sum-a[n-1];
	return triplet_sum(a,n-1,k-1,sum-a[n-1])||triplet_sum(a,n-1,k,sum);
}

int main()
{
	
	int a[]={12,3,4,1,6,9};
	
	int sum=9;
	
	int n=sizeof(a)/sizeof(a[0]);
	
	int k=3;
	
	cout<<triplet_sum(a,n,k,sum);
}
