// find min

#include<bits/stdc++.h>
using namespace std;

int fidmin(int a[],int low,int high,int n)
{
	
	if(low<=high)
	{
		
		int mid=(low+high)/2;
		
		int next=(mid+1)%n;
		int prev=(mid+n-1)%n;
		
		if(a[mid]<=a[next]&&a[mid]<=a[prev])
		return mid;
		
		if(a[mid]>a[low])
		{
			low=mid+1;
		}
		else if(a[mid]<a[high])
		{
			high=mid-1;
		}
	}
	
	return -1;
}

int main()
{
	
	int a[]={5,6,1,2,3,4};
	
	int n=sizeof(a)/sizeof(a[0]);
	
	int ans=fidmin(a,0,n-1,n);
	
	if(ans!=-1)
	{
		cout<<"Min element is.."<<a[ans]<<" "<<"Times Rotated is.."<<ans;
	}
	
	
}
