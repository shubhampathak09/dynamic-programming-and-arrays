// 4 5 1 2 3 0 8

// 8 5

//
#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	int a[]={4,5,1,2,3,0,8};
	
	int n=sizeof(a)/sizeof(a[0]);
	
	
	priority_queue<int>pq;
	
	for(int i=0;i<n;i++)
	{
		pq.push(a[i]);
	}
	
	int k=3; // get 3 largest element
	
	while(!pq.empty()&&k>0)
	{
		
		cout<<pq.top()<<" ";
		pq.pop();
		k--;
		
	}
 } 
