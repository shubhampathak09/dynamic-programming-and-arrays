// print the elemet  in sorted order

#include<bits/stdc++.h>
using namespace std;


int main()
{
	
	
	
	
int a[4][4]={{10,20,30,40},{15,25,35,45},{27,29,37,48},{32,33,39,50}};


	
priority_queue<int,vector<int>,greater<int>>pq;


// min heap;

int n=sizeof(a)/sizeof(a[0]);

for(int i=0;i<4;i++)
{
	for(int j=0;j<4;j++)
	pq.push(a[i][j]);
	
	}	
	while(!pq.empty())
	{
		cout<<pq.top();
		cout<<" ";
	    pq.pop();
			
	}
	
}
