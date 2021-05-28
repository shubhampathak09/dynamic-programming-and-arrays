#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	int a[]={3,4,1,2,3,45,1,2};
	
	int n=sizeof(a)/sizeof(a[0]);
	
//	priority_queue<int>pq;
	// default max heap
	
	// for min heap
	// 
	priority_queue<int,vector<int>,greater<int>>pq; /// min heap  in java this is opposite
	
	for(int i=0;i<n;i++)
	{
		
		pq.push(a[i]);
	}
	
	while(!pq.empty())
	{
		cout<<pq.top()<<" ";
		pq.pop();
	}
	
   // heapsort;	
}
