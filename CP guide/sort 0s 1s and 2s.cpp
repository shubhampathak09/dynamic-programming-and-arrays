// 
#include<bits/stdc++.h>
using namespace std;


void dutch(int a[],int n)
{
	
	int low=0;
	int high=n-1;
	int mid=0;
	
	while(mid<=high)
	{
		
		switch(a[mid])
		{
			
			case 0:
				swap(a[low],a[mid]);
				low++;
				mid++;
				break;
			case 1:
				mid++;
				break;
			case 2:
			    swap(a[mid],a[high]);
				high--;
				break;	
		}
		
	}
	
	
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}

int main()
{
	
	int a[]={0,1,2,2,1,0,1,0};
	
	
	int n=sizeof(a)/sizeof(a[0]);
	
	dutch(a,n);
}
