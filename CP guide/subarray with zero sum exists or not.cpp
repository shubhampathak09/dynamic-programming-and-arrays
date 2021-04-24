// find if subarray with zero sum exists

#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	int a[]={-3,2,3,1,6};
	
	int n=sizeof(a)/sizeof(a[0]);
	
	
	int csum=0;
	int res=0;
	
	map<int,int>mp;
	
	for(int i=0;i<n;i++)
	{
		
		csum+=a[i];
		
		if(csum==0)
		res++;
		
		if(mp.find(csum)!=mp.end())
		
		res+=mp[csum];
		
		mp[csum]++;
	}
	
	cout<<res;
	
	cout<<endl;
	
	if(res>=1)
	{
		cout<<"TRUE";
	}
	else
	cout<<"FALSE";
}
