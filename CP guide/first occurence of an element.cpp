// first occurence

#include<bits/stdc++.h>
using namespace std;


int main()
{
	
	int a[]={1,3,5,5,5,5,67,123,125};
	
	
	int n=sizeof(a)/sizeof(a[0]);
	
	
	int low=0;
	
	int high=n-1;
	
	int index=-1;
	
	
	int target=5;
	while(low<=high)
	{
		
		int mid=(low+high)/2;
		
		if(a[mid]==target)
		{
			index=mid;
			high=mid-1;
		}
		else if(a[mid]>target)
		{
			high=mid-1;
		}
		else
		{
			low=mid+1;
		}
	}
	
	if(index==-1)
	{
		cout<<"No such index";
	}
	else
		cout<<index;
		
		
	//	cout<<a[index];
}
