// lower bound implementation

#include<bits/stdc++.h>
using namespace std;

// index of first element greater than given element

// for queal we need to modify one condition

// aplpications for elemt repeating that satisy some property
int low_bound(int a[],int low,int high,int target)
{
	int ans=-1;
	while(low<=high)
	{
		int mid=low+(high-low)/2;
		
		if(a[mid]>target) // a[mid]>=target
		{
			ans=mid;
			high=mid-1;
		}
		else
		{
			low=mid+1;
		}
		
	}
	
	return ans;
}

int main()
{
	
	int a[]={2,3,4,1,5,6,3,4,7,8,9,2,5,5,7,6};
	
	int n=sizeof(a)/sizeof(a[0]);
	
	sort(a,a+n);
	
	// first elemet greater than 5
	cout<<low_bound(a,0,n-1,5);
	
	cout<<endl;
	
	//cout<<a[9];
	
	cout<<a[10];
}
