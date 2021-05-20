// Rainwater

#include<bits/stdc++.h>
using namespace std;


int rainwater(vector<int>a)
{
	
	int n=a.size();  //{2,0,2}
	
	if(n<2)
	return 0;
	
	
	
	int left[n];
	int right[n];
	
	left[0]=a[0];
	right[n-1]=a[n-1];
	
	
	for(int i=1;i<n;i++)
	{
		left[i]=max(a[i],left[i-1]);
	}
	for(int i=n-2;i>=0;i--)
	{
		right[i]=max(a[i],right[i+1]);
	 } 
	int water_trapped=0;
	
	for(int i=0;i<n;i++)
	{
		water_trapped+=(min(left[i],right[i])-a[i]);
		//water_trapped+=curr;
	}
	
	return water_trapped;
}

int main()
{
	
//	vector<int>a={2,0,2};

    vector<int>a={3,0,2,0,4};
	
	int ans=rainwater(a);
	
	cout<<ans;
	
	
	// ok better
	
}
