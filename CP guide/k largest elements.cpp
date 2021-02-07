// k largest elemets

#include<bits/stdc++.h>
using namespace std;

void klargest(int a[],int n,int k)
{
	
	priority_queue<int,vector<int>,greater<int>>minh;
	
	for(int i=0;i<n;i++)
	{
		
		minh.push(a[i]);
		
		if(minh.size()>k)
		{
			minh.pop();
		}
		
	}
	
	
	while(!minh.empty())
	{
		cout<<minh.top()<<" ";
		minh.pop();
	}
}


int main()
{
	
	int a[]={5,7,1,2,4,0,9,13};
	
	int n=sizeof(a)/sizeof(a[0]);
	
	int k=3;
	
	klargest(a,n,k);
	
	
}
