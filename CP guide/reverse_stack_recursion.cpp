// reverse a stack

#include<bits/stdc++.h>
using namespace std;


//3 4 5 1 6 7  -> 7 6 1 5 4 3
//hypothesis -> rverse(stack<int>s)-->gives me resverse


//3 4 5 1 6 7   7 6 1 5 4 3

// 7
// rve(3 4 5 1 6)   -> 6 1 5 4 3 7

void insert_bottom(stack<int>&s,int key)
{
	// 5 6 7 8 9
	if(s.empty())
	{
		s.push(key);
		return;
	}
	
	int tp=s.top();
	s.pop();
	insert_bottom(s,key);
	s.push(tp);
}

void reverse(stack<int>&s)
{
if(s.size()==1)
{
	return;
}
// 5 6 7 8 9   9 8 7 6 5
// 5 6 7 8       8 7 6 5   insert 9 at bottom 
int tp=s.top();

s.pop();

reverse(s);

insert_bottom(s,tp);
	
}

int main()
{
	stack<int>s;
	
	s.push(5);
	s.push(6);
	s.push(7);
	s.push(8);
	s.push(9);
	
	stack<int>temp=s;
	
	while(!s.empty())
	{
		cout<<s.top()<<" ";
		s.pop();
	}
	
	// before revering
	
	cout<<endl;
	
	reverse(temp);
	
	while(!temp.empty())
	{
		cout<<temp.top()<<" ";
		temp.pop();
	}
}
