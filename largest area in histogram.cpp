
// finally after 3 yrs
// jan 08 2021
//Largest rectangle histogram problem


#include<bits/stdc++.h>
using namespace std;


void solve()
{
	
	int a[]={6,2,5,4,5,1,6};
	
	stack<int>temp;
	
	int n=sizeof(a)/sizeof(a[0]);
	
	vector<int>left(n);
	vector<int>right(n);
	
	// calulations for left part
	
	for(int i=0;i<n;i++)
	{
		
		if(temp.empty())
		{
			left[i]=0;
			temp.push(i);  // store the current index in stack
		}
		else
		{
			while(!temp.empty()&&a[temp.top()]>=a[i])
			{
				// keep popping
				temp.pop();
			}
			if(temp.empty())
			{
				left[i]=0;
				temp.push(i);
			}
			else
			{
				left[i]=temp.top()+1;
				temp.push(i);
			}
		}
	}
	// empty the stack
	
	while(!temp.empty())
	{
		temp.pop();
	}
	// calculation 
	//for right part
	
	for(int i=n-1;i>=0;i--)
	{
		if(temp.empty())
		{
			right[i]=n-1;
			temp.push(i);
		}
		else
		{
			while(!temp.empty()&&a[temp.top()]>=a[i])
			{
				temp.pop();
			}
			if(temp.empty())
			{
				right[i]=n-1;
				temp.push(i);
			}
			else
			{
				right[i]=temp.top()-1;
				temp.push(i);
			}
		}
	}
	
	int mx_area=INT_MIN;
	for(int i=0;i<=n-1;i++)
	{
		mx_area=max(mx_area,a[i]*(right[i]-left[i]+1));
	}
	cout<<mx_area;
}

int main()
{
	
	solve();
	
}
