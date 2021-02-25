#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	
	int a[]={0,5,1,2,4,3};
	
	int n=sizeof(a)/sizeof(a[0]);
	
	map<int,int>mp;
	
	for(int i=0;i<n;i++)
	mp[a[i]]=i;
	
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	for(int i=0;i<n;i++) // 0 5 1 2 4 3
	{
	 
	 cout<<i<<" "<<mp[i]<<" ";
	 cout<<endl;
	 a[mp[i]]=a[i];
		
	}
	
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
