// subarray sort 
// appr-2

#include<bits/stdc++.h>
using namespace std;

bool outorder(vector<int>a,int i)
{
	
	
	if(i==0)
	return a[i]>a[1];
	
	
	if(i==a.size()-1)
	return a[i]<a[a.size()-2];
	
	
	return a[i]>a[i-1]||a[i]<a[i-1];
}

pair<int,int>solve(vector<int>a)
{
	
	int smallest=INT_MAX;
	int largest=INT_MIN;
	
	for(int i=0;i<a.size();i++)
	{
		
		if(outorder(a,i))
		{
			smallest=min(smallest,a[i]);
			largest=max(smallest,a[i]);
		}
		
	}
	
	if(smallest==INT_MAX)
	{
		return {-1,-1};
	}
	
	int left=0;
	
	while(smallest>=a[left])
	{
		left++;
	}
	
	int right=a.size()-1;
	
	while(largest<=a[right])
	{
		right--;
	}
	
	return {left,right};
}

int main()
{
	
		vector<int>a={1,2,3,4,5,8,6,7,9,10,11};
		
		auto ans=solve(a);
		
		cout<<ans.first<<" "<<ans.second;
	
}


// strange

