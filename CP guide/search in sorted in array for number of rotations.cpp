#include<bits/stdc++.h>
using namespace std;


int findrotation()
{
	
	int a[]={8,7,2,3,4,5};
	
	int n=sizeof(a)/sizeof(a[0]);
	
	
	int low=0;
	int high=n-1;
	int ans=-1;
	while(low<=high)
	{
		
		int mid=(low+high)/2;
		
		if(a[mid]>a[low])
		{
			low=mid+1;
		}
		else // mid value is less
		{
		
		return mid;
	//	 return mid;
		 //low=mid;
		}
	}
//	return ans;
}



int finrot()
{
		
	int a[]={8,7,2,3,4,5};
	
	int n=sizeof(a)/sizeof(a[0]);
	
    int low=0;
    int high=n-1;
    
    while(low<=high)
    {
    	
    	int mid=(low+high)/2;
    	
    	if(mid==0)
    	return 0;
    	
    	else if(mid==n-1)
    	return n-1;
    	
    	else
    	{
		
    	if(a[mid]<a[mid+1]&&a[mid]>a[mid-1])
    	return mid;
    	
    	else if(a[mid]>a[low])
    	low=mid+1;
    	else
    	high=mid;
	}
}
	
	 }	 

int main()
{
	
	int ansx=findrotation();
	
	cout<<ansx;
	
	
	cout<<finrot();
}
