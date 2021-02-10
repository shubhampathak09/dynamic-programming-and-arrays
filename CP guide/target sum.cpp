
//Two sum

#include<bits/stdc++.h>
using namespace std;

int main()
{

int nums[]={2,7,11,15};


int n=sizeof(nums)/sizeof(nums[0]);

	
 map<int,int>mp;

int target=9;
for(int i=0;i<n;i++)
{
	int temp=nums[i];
	
	if(mp.find(target-temp)!=mp.end())
	{
		cout<<mp[target-temp]<<" "<<i;
		break;
	}
	else
	{
		//cout<<1;
		mp[temp]=i;
	}
	}	
	
}
