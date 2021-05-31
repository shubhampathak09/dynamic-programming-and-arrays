#include<bits/stdc++.h>
using namespace std;


void insert(stack<int>&st,int x)
{
	
	
	if(st.size()==0||x<=st.top())  // x>=st.top() for descendiung order
	{
		st.push(x);
		return;
	}
	
	int te=st.top();
	st.pop();
	insert(st,x);
	st.push(te);
}

void sortstack(stack<int>&st)
{
	
	
	if(st.size()==1)
	{
		return;
	}
	
	int temp=st.top();
	
	st.pop();
	
	sortstack(st);
	
	insert(st,temp);
	
}

int main()
{
	
	
	stack<int>s;
	
	s.push(1);
	s.push(5);
	s.push(3);
	s.push(0);
	s.push(-1);
	s.push(9);
	
	
	stack<int>temp=s;
	
	while(temp.empty()==false)
	{
		
		cout<<temp.top();
		temp.pop();
	}
	
	
	sortstack(s);
	
	
	cout<<endl;
	
	while(!s.empty())
	{
		cout<<s.top()<<" ";
		s.pop();
	}
	
}
