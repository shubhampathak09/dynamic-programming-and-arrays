#include<bits/stdc++.h>
using namespace std;

int getmin(stack<int>&s,int &mn)
{
	
	
	if(s.size()==1)
	{
		return s.top();
	}
	
	int x=s.top();
	s.pop();
	int y=getmin(s,mn);
	s.push(x);
	return min(x,y);
}

int main()
{
	
	
	stack<int>s;
	s.push(2);
	s.push(2);
	s.push(10);
	s.push(2);
	s.push(14);
	s.push(20);
	
	int mn=0;
	
	cout<<getmin(s,mn);
	
	
    
		
}
