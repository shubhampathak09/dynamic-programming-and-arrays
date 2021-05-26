// heap sort


#include<bits/stdc++.h>
using namespace std;


void heapify(int a[],int n,int i)  // i is current index currently the root at start i=0;
{
	
	
    int left=2*i+1;
    int right=2*i+2;
	
	int largest=i;	
	
	if(a[largest]<a[left]&&left<n)
	largest=left;
	
	if(a[largest]<a[right]&&right<n)
	largest=right;
	
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


int main()
{
	
int a[]={3,2,1,4,5,6,1,0};

int n=sizeof(a)/sizeof(a[0]);

	
// before heapsort

for(int i=0;i<n;i++)
{
	
	cout<<a[i]<<" ";
	
	}	

heapsort(a,n);



cout<<endl;

for(int i=0;i<n;i++)
cout<<a[i]<<" ";
	
}

