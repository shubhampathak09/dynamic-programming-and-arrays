// minimum cost to connect ropes

#include<bits/stdc++.h>
using namespace std;


int main()
{
	
	int a[]={5,10,3,20,12};
	//cost=26;
	//8 10 20 12
	//18 20 12
	//cost=8+18+30+50
	//cost=106
	
	
	int n=sizeof(a)/sizeof(a[0]);
	
	priority_queue<int,vector<int>,greater<int>>pq;
	
	for(int i=0;i<n;i++)
	pq.push(a[i]);
	
	int cost=0;
	while(pq.size()>=2)
	{
		int fir=pq.top();
		pq.pop();
		int sec=pq.top();
		pq.pop();
		pq.push(fir+sec);
		cost+=fir+sec;
	
		
			}
	cout<<cost;	
}
