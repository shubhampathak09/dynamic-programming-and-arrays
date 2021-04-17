// sort n elemt dec order heap

#include<bits/stdc++.h>
using namespace std;




int main()
{

int a[]={4,1,5,0,3,9,2};

int n=sizeof(a)/sizeof(a[0]);

//priority_queue<int,vector<int>,greater<int>>pq;  // min heap

priority_queue<int>pq;
	
for(int i=0;i<n;i++)
pq.push(a[i]);

for(int i=0;i<n;i++)
{
	a[i]=pq.top();
	pq.pop();
	}
	
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
		}	
}
