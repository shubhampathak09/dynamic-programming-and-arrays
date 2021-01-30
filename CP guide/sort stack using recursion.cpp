// stack

// 5 6 7 8 9
// 9 8 7 6 5

//5 sort(stack 6 7 8 9)
//5 (*9 8 7 6)
//insert 5


#include<bits/stdc++.h>
using namespace std;

void insert(stack<int>&s,int key)
{
	if(s.empty()||s.top()<=key)
	{
		s.push(key);
		return;
	}
	
	int tp=s.top();
	s.pop();
	insert(s,key);
	s.push(tp);
}

void sortstack(stack<int>&s)
{
	// base case
	if(s.size()==1)
	return;
	
	int temp=s.top();
	s.pop();
	sortstack(s);
	insert(s,temp);
}


int main()
{
	
	stack<int>s;
	
	s.push(9);
	s.push(5);
	s.push(7);
	s.push(6);
	s.push(8);

    	
	// before sorting
 
	
    cout<<"Before sorting.."<<endl;
	stack<int>temp=s;
	
	 	
	sortstack(s);

	
	while(!temp.empty())
	{
		cout<<temp.top()<<" ";
		temp.pop();
	}
	
	cout<<endl;
	
	cout<<"After sorting.."<<endl;
	
	while(!s.empty())
	{
		cout<<s.top()<<" ";
		s.pop();
	}
}
