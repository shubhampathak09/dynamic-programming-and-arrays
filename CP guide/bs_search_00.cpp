// binary search -> search

#include<bits/stdc++.h>
using namespace std;

int search(int a[],int key,int n)
{
	int low=0;
	
	int high=n-1;
	
//	cout<<high;
	
	while(low<=high)
	{
		
		int mid=(low+high)/2;
        //cout<<mid<<" ";		
		if(a[mid]==key)
		return mid;
		
		else if(a[mid]>key)
		{
			high=mid-1;
		}
		else
		{
			low=mid+1;
		}
		
	}
	
	return -1;
}

int main()
{
	int a[]={-10,-5,4,6,10,11};

    int n=sizeof(a)/sizeof(a[0]);

    //cout<<n;
         	
	int index=search(a,10,n);
	
	
	
	cout<<"Key found at.."<<index<<endl;
}
