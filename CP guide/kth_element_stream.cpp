// kth largest element in stream
// need to debug
#include<bits/stdc++.h>
using namespace std;


void kthelement_stream(int a[],int n,int k)
{
	
	
	priority_queue<int,vector<int>,greater<int>>pq;
	
	for(int i=0;i<n;i++)
	{
		pq.push(a[i]);
		
		if(pq.size()<k)
		{
			continue;
		}
		else if(pq.size()==k)
		{
		 	cout<<"current kth largest element in stream is"<<pq.top()<<endl;
		}
		else  //pq.size()>k
		{
			 pq.pop();
			 	cout<<"current kth largest element in stream is"<<pq.top()<<endl;
		}
	}
	
}

int main()
{
	
	int a[]={3,4,5,1,7,80,91,24,5,6,7,0,34};
	
	int n=sizeof(a)/sizeof(a[0]);
	
	
	int k=3;
	
	kthelement_stream(a,n,k);
}
