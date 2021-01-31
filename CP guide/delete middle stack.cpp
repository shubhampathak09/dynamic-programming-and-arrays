#include<bits/stdc++.h>
using namespace std;


void getmiddlestack(stack<int>&s,int k)
{
	
	if(k==1)
	{
		s.pop();
		return;
	}
	
	int index=s.top();
	s.pop();
	getmiddlestack(s,k-1);
	s.push(index);
}

int main()
{
	
	stack<int>s;
	
	
	int a[]={2,3,4,5,1,6,7};
	
	int n=sizeof(a)/sizeof(a[0]);
	
	for(int i=0;i<n;i++)
	{
		s.push(a[i]);
	}
	// 2  3  4  5  1  6 7  -?2 3 4 1 6 7
	int k=n/2+1;
	
	// before delte
	stack<int> temp=s;
	while(!temp.empty())
	{
		cout<<temp.top()<<" ";
		temp.pop();
		
	}
	cout<<endl;
	
	getmiddlestack(s,k);
	
	while(!s.empty())
	{
		cout<<s.top()<<" ";
		s.pop();
	}
	
}
