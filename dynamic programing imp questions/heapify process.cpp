// heapify process
#include<bits/stdc++.h>
using namespace std;

void heapify(int a[],int n,int i)
{
	
	int largest=i;
	int left=2*i+1;
	int right=2*i+2;
	
	if(a[largest]<a[left]&&left<n)
	{
		largest=left;
	}
	
	if(a[largest]<a[right]&&right<n)
	{
		largest=right;
	}
	
	if(largest!=i)
	{
	
	swap(a[largest],a[i]);
	
	heapify(a,n,largest);
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
		swap(a[0],a[i]);
		heapify(a,i,0);
	}
	
}

void printarray(int a[],int n)
{
	
	
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
		
	}
}

int main()
{
	
	int a[]={3,4,1,2,8,9,0};
	
	int n=sizeof(a)/sizeof(a[0]);
	
	heapsort(a,n);
   
   
   printarray(a,n);	
}

//fucko
