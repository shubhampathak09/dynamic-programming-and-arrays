// max area histogram

#include<bits/stdc++.h>
using namespace std;


void solve(int a[],int n)
{
	
	stack<int>s;
	int left[n];
	
	for(int i=0;i<n;i++)
	{
		
		if(s.empty())
		{
			s.push(i);
			left[i]=i;
		}
		else
		{
		
		while(a[i]<=a[s.top()]&&s.empty()==false)
		{
			s.pop();
			 
			
		}
			if(s.empty())
		{
			left[i]=0;
			s.push(i);
		}
		else
		{
			left[i]=a[s.top()+1];
			s.push(i);
		}
	}
		
	
	}

	for(int i=0;i<n;i++)
	{
		cout<<left[i]<<" ";
	}
}

int main()
{
	
	
	
	int a[]={2,1,5,6,2,3};
	
	int n=sizeof(a)/sizeof(a[0]);
	
	solve(a,n);
	
}
