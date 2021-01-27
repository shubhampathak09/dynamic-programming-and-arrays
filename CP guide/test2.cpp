
// binary search in rotated sorted array

#include<bits/stdc++.h>
using namespace std;

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
	
	int low=0;
	
	int high=n-1;
	
	int index=finmin(a,low,high);	
	
	cout<<a[index];
}





a[]={1,2,3,4,5,6,7};



t t t t t f f
7,6,5,4,3,2,1


1 2 3 4 5 6
6 5 4 3 2 1

3 4 5 6 1 2

4 5 6 1 2 3

5 6 1 2 3 4

6 1 2 3 4 5


