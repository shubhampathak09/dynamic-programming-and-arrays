#include<bits/stdc++.h>
using namespace std;


void sortksortedarray(int a[],int n,int k)
{
	
	priority_queue<int,vector<int>,greater<int>>pq;
	
	int index=0;
	for(int i=0;i<n;i++)
	{
		
		pq.push(a[i]);
		
		if(pq.size()>k)
		{
			a[index++]=pq.top();
			pq.pop();
		}
		
	}
	
	while(!pq.empty())
	{
		a[index++]=pq.top();
		pq.pop();
	}
	
	
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}

int main()
{
	
	int a[]={6,5,3,2,8,10,9};
	
	int n=sizeof(a)/sizeof(a[0]);
	
	int k=3;
	
	sortksortedarray(a,n,k);
	
}
