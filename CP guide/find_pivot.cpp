/*Given a sorted integer array which is rotated any number of times,
find the pivot index i.e. index of the minimum element of the array.*/

#include<bits/stdc++.h>
using namespace std;
// 3 4 5 6 7 8 9

// 6 7 8 9 3 4 5


int fin_pivot(int a[],int low,int high)
{
	
//	int low=0;
//	int high=n-1;
	int ans=-1;
	while(low<=high)
	{
		int mid=low+(high-low)/2;
		if(a[mid]<a[mid-1]||mid==0)
		{
			ans=mid;
	        low=mid+1;  		
		}
		else
		{
			high=mid-1;
		}
	}
	return ans;
}


int finmin(int a[],int low,int high)
{
	int ans=-1;
	while(low<=high)
	{
		int mid=(low)+(high-low)/2;
		if(a[mid]<a[mid-1]||mid==0)
		{
			ans=mid;
			low=mid+1;
		}
		else
		{
			high=mid-1;
		}
	}
	
	return ans;
}


int main()
{
	int a[]={6,7,8,9,3,4};
	
	
	
	int n=sizeof(a)/sizeof(a[0]);
	
	cout<<n;
	
	int low=0;
	int high=n-1;
	int index=fin_pivot(a,low,high);
	
	cout<<index;
}
