// last occurence of an element

#include<bits/stdc++.h>
using namespace std;
// last occurence of target
int last_element(int a[],int n,int target)
{
	
 int low=0;
 int high=n-1;
 
 int ans=-1;
 
 while(low<=high)
 {
 	int mid=low+(high-low)/2;
 	if(a[mid]>target)
 	{
 		high=mid-1;
	 }
	 else if(a[mid]==target)
	 {
	 	// last occurence
	 	ans=mid;
	 	low=mid+1;
	 }
     else  // a[mid]<target
	 {
	 	low=mid+1;
		  }
		   	
 }
   return ans;
} 

int main()
{
	
	int a[]={1,2,2,3,3,3,4,4,5,5,5,5,6,7,8,8};
	
	int n=sizeof(a)/sizeof(a[0]);
	
	
	cout<<last_element(a,n,0);
}
