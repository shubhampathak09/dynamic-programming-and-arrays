// fin min in rotated sorted array no duplicates

#include<bits/stdc++.h>
using namespace std;


int find_(int a[],int low,int high)
{
 
	
	int ans=-1;
	while(low<high)
	{
		
		int mid=low+(high-low)/2;
		
	//	cout<<mid;
		
		if(a[mid]>a[high])
		{
			// go right
			low=mid+1;
		}
		else
		{
	 ans=mid;
			high=mid;
		}
	}
	
	return ans;
}

int main()
{
	
	int a[]={4,5,6,7,1,2,3};
	
	int n=sizeof(a)/sizeof(a[0]);
	
	//cout<<n;
	
	int index=find_(a,0,n-1);
	
	cout<<a[index];
	
}
