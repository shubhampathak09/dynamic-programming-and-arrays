// second appraocj

//int a[]={1,2,3,-1,0,-9,-8,4,-7}


#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	int a[]={1,2,3,-1,0,-9,-8,4,-7};
	
	int n=sizeof(a)/sizeof(a[0]);
	
	
	int low=0;
	
	int high=n-1;
    
	while(low<=high)
	{
		
		if(a[low]<0)
		{
			swap(a[low],a[high]);
			high--;
		}
		else
		{
			low++;
		}
		 } 	
 	 
  for(int i=0;i<n;i++)
  {
  	cout<<a[i]<<" ";
  }


}


// a more optimised way to doing thinggs
