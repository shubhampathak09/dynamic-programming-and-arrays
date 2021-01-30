// sorting a vector attempt 2

#include<bits/stdc++.h>
using namespace std;


void _insert(vector<int>&v,int key)
{
	
	if(v.size()==0||v[v.size()-1]<=key)
	{
		v.push_back(key);
		return;
	}
	// induction step
	
	int temp=v[v.size()-1];
	v.pop_back();
	_insert(v,key);
	v.push_back(temp);
}

void _sort(vector<int>&v)
{
	
	if(v.size()==1)
	{
		return;
	}
	
	// 1 8 3 5 9 2   sort
	
	int temp=v[v.size()-1];
	v.pop_back();
	_sort(v);  // 1 3 5 8 9
	_insert(v,temp);
	
	// thats it we are done
}

int main()
{
	
	vector<int> v={1,8,3,5,9,2};
	_sort(v);
	
	for(auto x:v)
	{
		cout<<x<<" ";
	}
}
