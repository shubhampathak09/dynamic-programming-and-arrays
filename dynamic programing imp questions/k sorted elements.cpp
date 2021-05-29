// sort k sorted arrays

#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	
	int k=3;
	
	
	int a[]={6,5,3,2,8,10,9};
	
	int n=sizeof(a)/sizeof(a[0]);
	
	priority_queue<int,vector<int>,greater<int>>pq;
	
	int index=0;
	
	for(int i=0;i<n;i++)
	{
		
		pq.push(a[i]);
		
		if(pq.size()>k)
		{
			a[index]=pq.top();
			pq.pop();
			index++;
		}
		
	}
	
	while(!pq.empty())
	{
		a[index]=pq.top();
		index++;
		pq.pop();
	}
	
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
