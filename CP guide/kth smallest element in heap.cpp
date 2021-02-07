// priority queue

// kth smallest element

#include<bits/stdc++.h>
using namespace std;

void kthmax(int a[],int n,int k)
{

	// min heap
	
	priority_queue<int,vector<int>,greater<int>>pq;  //similar in Dijkstra min heap :P rember aug 2020
	
	for(int i=0;i<n;i++)
	{
		pq.push(a[i]);
		
		if(pq.size()>k)
		{
			pq.pop();
		}
	}
	
	cout<<pq.top();
	return;
}

int main()
{
	
	int a[]={3,4,1,5,6,7,8,0,13,12,8};
	
//	0 1 3 4 5 6 7 8 8 12 13
	
	int k=4;
	
	priority_queue<int>maxh; // maxheap as kth smallest element is required
	
	int n=sizeof(a)/sizeof(a[0]);
	
	for(int i=0;i<n;i++)
	{
		maxh.push(a[i]);
		
		if(maxh.size()>k)
		{
			maxh.pop();
		}
	}
	
	cout<<maxh.top();  // this will returen the kth smallest element in heap :p
	
	
	cout<<endl;
	
	// kth largest element
	
	kthmax(a,n,k);
	
}
