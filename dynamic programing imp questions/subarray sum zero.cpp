// subarray sum equal to zero

#include<bits/stdc++.h>
using namespace std;


bool solve(int a[],int n)
{
	
	int prefixsum=0;
	
	map<int,int>mp;
	
	
	for(int i=0;i<n;i++)
{
	
	prefixsum+=a[i];
	
	if(prefixsum==0)
	return true;
	
	if(mp[prefixsum]!=0)
	return true;
	
	mp[prefixsum]++;
}
	
	return false;
}


int main()
{
	
	
	int a[]={1,4,-2,-2,5,-4,3};
	
	int n=sizeof(a)/sizeof(a[0]);
	
	
	int ans=solve(a,n);
	
	if(ans)
	cout<<"Subarray sum exists";
	else
	cout<<"No such subuarray exists";
	
	
	return 0;
	
	
	
}

