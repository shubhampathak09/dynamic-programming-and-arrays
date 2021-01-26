// lru cache

#include<bits/stdc++.h>
using namespace std;

list<int>cache;
map<int,list<int>::iterator>mp;
int k=3;

void hit(int n)
{
	if(mp.find(n)==mp.end())
	{
		
		if(cache.size()==k)
		{
			
			int x=cache.back();
			cache.pop_back();
			mp.erase(x);
			
		}
		 
	}
	
	else
	{
		cache.erase(mp[n]); // this step is critical
	}
	cache.push_front(n);
	mp[n]=cache.begin();
}

void display()
{
	for(auto it=cache.begin();it!=cache.end();++it)
	{
		cout<<(*it)<<endl;
	}
}

int main()
{
	
	
	hit(1);
	hit(2);
	hit(4);
	hit(1);
	
	display();
	
//	cout<<"...";
    cout<<endl; 
	 	
	hit(4);
	hit(2);
	display();
}
