// heapsort

#include<bits/stdc++.h>
using namespace std;


void heapify(int a[],int n,int i)
{
	
	int l=i;
	int left=2*i+1;
	int right=2*i+2;
	
	if(left<n&&a[left]>a[l])
	l=left;
	
	if(right<n&&a[right]>a[l])
	l=right;
	
	if(l!=i)
	{
	
	swap(a[i],a[l]);
	heapify(a,n,l);
}

}

void heapsort(int a[],int n)
{
	
	
	for(int i=n/2-1;i>=0;i--)
	{
		heapify(a,n,i);
		
	}
	
	
	for(int i=n-1;i>=0;i--)
	{
		swap(a[i],a[0]);
		
		heapify(a,i,0);
	}
}

int main()
{
	
		int a[]={7,1,2,3,1,4,0,1,6,2,3};
	
	
	    int n=sizeof(a)/sizeof(a[0]);
	
	
	    heapsort(a,n);
	    
	    for(int i=0;i<n;i++)
	    {
	    	cout<<a[i]<<" ";
		}
}
