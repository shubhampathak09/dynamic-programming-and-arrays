// count swaps in  insertion sort

#include<bits/stdc++.h>
using namespace std;

int count_swaps(int a[],int n)
{
	
	int count=0;
	
	int i,j,key;
	
	for(int i=1;i<n;i++)
	{
		j=i-1;
		key=a[i];
		while(j>=0&&a[j]>key)
		{
			count++;
			a[j+1]=a[j];
			j--;
		}
		// insert key
		a[j+1]=key;
	}
	
	return count;
}

int main()
{
	
	int a[]={12, 15, 1, 5, 6, 14, 11};
	
	int n=sizeof(a)/sizeof(a[0]);
	
	cout<<count_swaps(a,n);
	
}
