// index of first element that is greater or equal
#include<bits/stdc++.h>
using namespace std;
// int a[]={1,3,3,4,4,5,5,5,6,6,10,10,11};

int low_bound_index(int a[],int low,int high,int target)
{
	int ans=-1;
	while(low<=high)
	{
		 int mid=(low+high)/2;
		 
		 if(a[mid]>=target)
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
	
	int a[]={1,3,3,4,4,5,5,5,6,6,10,10,11};
	
	int n=sizeof(a)/sizeof(a[0]);
	
	cout<<low_bound_index(a,0,n-1,6);
	
	
	// last occurence== (first ocuurence of target+1) -1   use this formula instead of writting binary search code two times
	
	
	
}
