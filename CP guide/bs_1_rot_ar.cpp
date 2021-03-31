// attempt 2

#include<bits/stdc++.h>
using namespace std;

int bs()
{
	
	int a[]={8,7,2,3,4,5};
	
	int n=sizeof(a)/sizeof(a[0]);
	
	int low=0;
	int high=n-1;
	
	while(low<=high)
	{
		
		int mid=(low+high)/2;
		
		if(a[mid]<=a[(mid+1)%n]&&a[mid]<=a[(mid-1+n)%n])
		return mid;
		
		if(a[mid]>=a[low])
		{
			low=mid+1;
		}
		else if(a[mid]<=a[high])
		high=mid-1;
	}
	
}

int main()
{
	
	cout<<bs;
	
}
