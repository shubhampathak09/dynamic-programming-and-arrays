#include<bits/stdc++.h>
using namespace std;


// intutive?
bool solve(int a[],int n)
{
	
	map<int,int>mp;
	
	int currsum=0;
	
	for(int i=0;i<n;i++)
	{
		
		currsum+=a[i];
		
		if(mp.find(currsum)!=mp.end())
		{
			return true;
		}
		mp[currsum]++;
	}
	
	return false;
}


int main()
{
	
	
	int a[]={4,2,-3,1,6};
	
	int n=sizeof(a)/sizeof(a[0]);
	
	
	int ans=solve(a,n);
	
	cout<<ans;
}
