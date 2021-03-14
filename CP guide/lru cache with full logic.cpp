//LRU cache

#include<bits/stdc++.h>
using namespace std;


list<int>dq;

int csize=3;

map<int,list<int>::iterator>mp;


void refer(int x)
{
	
// refers key in map

if(mp.find(x)!=mp.end())
{
	
if(dq.size()==csize)
{
	// if dq is full
	int last=dq.back();
	dq.pop_back();
	dq.erase(mp[x]);
	dq.push_front(x);
	mp[x]=dq.begin();
	}	
else
{
	// size if not full
	dq.erase(mp[x]); 
	dq.push_front(x);
	mp[x]=dq.begin();
	}
}
else //key does not exsist in map
{
	if(dq.size()==csize)
	{
		int last=dq.back();
		dq.pop_back();
		mp.erase(last);
		dq.push_front(x);
		mp[x]=dq.begin();
	}
	else
	{
		
		dq.push_front(x);
		mp[x]=dq.begin();
		
	}
	
	}
		
 	
	
}


void display()
{
	
	for(auto x:dq)
	{
		cout<<x<<" ";
	}
	cout<<endl;
}

int main()
{
	
	refer(1);
	display();
	refer(3);
	display();
	refer(4);
	display();
	refer(2);
	display();
	refer(1);
	display();
	refer(2);
	display();
}
