// maxarray sum

#include<bits/stdc++.h>
using namespace std;


int main()
{
	
	int a[]={-1,2,3,4,-2,6,-8,3};
	
	int n=sizeof(a)/sizeof(a[0]);
	
	
	int currsum=a[0];
	int maxsum=a[0];
	
	
	for(int i=1;i<n;i++)
	{
		
		
		if(currsum<0)
		{
			currsum=a[i];
		}
		else
		currsum=currsum+a[i];
		
		if(maxsum<currsum)
		{
		maxsum=currsum;
		}
	}
	cout<<maxsum;
}
