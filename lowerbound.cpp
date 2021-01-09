// custom  lower bound

#include<bits/stdc++.h>
using namespace std;

// index of first element that is non less than or equal to target element


int findtarget(int a[],int n,int target)
{
int low=0;
int high=n-1;	

while(low<high)
{

int mid=low+(high-low)/2;	

if(a[mid]<target)
{
	low=mid+1;
}

else
{
	high=mid;
	}	
}
return low;
}

int main()
{

int a[]={10,20,30,40,50};

int n=sizeof(a)/sizeof(a[0]);

int target;
cin>>target;


int x=findtarget(a,n,target);
//int y=findtarget(a,n,target+1);

cout<<x; 

	
}
