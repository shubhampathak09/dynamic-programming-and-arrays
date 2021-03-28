//

//isort


#include<bits/stdc++.h>
using namespace std;


void insertionsort()
{
	
	
	int a[]={7,1,2,3,1,4,0,1,6,2,3};
	
	
	int n=sizeof(a)/sizeof(a[0]);
	
	
	
	int key;
    int j;	
	for(int i=1;i<n;i++)
	{
		key=a[i];
		j=i-1;
		
		while(j>=0&&a[j]>key)
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=key;
	}
	
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	
}




void heapsort()
{
	
		int a[]={7,1,2,3,1,4,0,1,6,2,3};
	
	
	    int n=sizeof(a)/sizeof(a[0]);
	
	    priority_queue<int,vector<int>,greater<int>>pq;
	    
	    
	    
	    for(int i=0;i<n;i++)
	    {
	    
		pq.push(a[i]);
			
		}
		
		while(!pq.empty())
		{
			
			cout<<pq.top()<<" ";
			pq.pop();
		}
		
}

int main()
{
	insertionsort();
	
	
	heapsort();
}
