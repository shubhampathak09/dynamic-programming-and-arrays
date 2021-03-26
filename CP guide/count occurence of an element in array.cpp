// count of an elemtn in sorted array

#include<bits/stdc++.h>
using namespace std;


int a[]={2,4,10,10,10,18,20};



int firstoccurence(int x)
{
int low=0;

int first=-1;

int high=sizeof(a)/sizeof(a[0])-1;

while(low<=high)
{
	
	int mid=(low+high)/2;
	
	if(a[mid]==x)
	{
     first=mid;
	 high=mid-1;		
	}
	else if(a[mid]>x)
	{
		high=mid-1;
	}
	else
	low=mid+1;
}

return first;	
}


int lastoccurece(int x)
{
	
	int last=-1;
	int low=0;
	int high=sizeof(a)/sizeof(a[0])-1;
	
	while(low<=high)
	{
		
		int mid=(low+high)/2;
		
		if(a[mid]==x)
		{
			last=mid;
			low=mid+1;
		}
		else if(a[mid]>x)
		{
			high=mid-1;
		}
		else
		low=mid+1;
	}
	return last;
}

int main()
{
	
	
	int i=firstoccurence(10);
	
	int j=lastoccurece(10);
	
	cout<<i<<j<<endl;
	 
	cout<<j-i+1;
	
}
