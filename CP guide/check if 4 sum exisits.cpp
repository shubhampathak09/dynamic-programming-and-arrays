// 4 sum

#include<bits/stdc++.h>
using namespace std;

bool func(int a[],int n,int sum,int count)
{
	
	if(sum==0&&count==4)
	return true;
    
	if(count>4||n==0)
	return false;
	
	// incluede and element or excle
	
	return func(a,n-1,sum-a[n-1],count+1)||func(a,n-1,sum,count);	
}

int main()
{
	
int a[]={2,7,4,0,9,5,1,3};

int n=sizeof(a)/sizeof(a[0]);	


int sum=50;

int ans=func(a,n,sum,0);

cout<<ans;	
}
