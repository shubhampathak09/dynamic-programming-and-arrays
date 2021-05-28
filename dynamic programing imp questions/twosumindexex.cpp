#include<bits/stdc++.h>
using namespace std;


void twosum(int a[],int target)
{
    
	int n=sizeof(a)/sizeof(a[0]);
		
	map<int,int>mp;
	
	vector<int>result;	
	for(int i=0;i<n;i++)
	{
		
	if(mp.find(target-a[i])!=mp.end())
		{
			
		result.push_back(a[i]);
		result.push_back(target-a[i]);
		
		cout<<i<<" "<<mp[target-a[i]];
			
		return;	
		}
		
		mp[a[i]]=i;
	}
	
	
}

int main()
{
	
	
	int a[]={2,7,11,15};
	
	int n=sizeof(a)/sizeof(a[0]);
	
	
    twosum(a,9);
	
	//cout<<result.size();
	
}
