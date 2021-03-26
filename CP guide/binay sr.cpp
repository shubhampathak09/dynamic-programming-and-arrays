/*
Input : arr[] = {1, 3, 5, 5, 5, 5, 67, 123, 125}    
        x = 5
Output : First Occurrence = 2
         Last Occurrence = 5
         */
         
#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	int a[]={1,3,5,5,5,5,67,123,125};
	
	int n=sizeof(a)/sizeof(a[0]);
	
	int target=5;
	
	int low=0;
	int high=n-1;
	
	while(low<=high)
	{
		int mid=(low+high)/2;
	    
		if(a[mid]>target)
		{
			high=mid-1;
			}
		else if(a[mid]<target)
		{
			low=mid+1;
				}
				else
				{
					if(a[mid]!=a[mid-1])
					high=mid-1;
						}		
	}
            cout<<high;	
		 }         
