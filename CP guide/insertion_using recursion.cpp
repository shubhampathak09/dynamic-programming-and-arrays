// insertion using recusrion

#include<bits/stdc++.h>
using namespace std;


void insertion(vector<int>&v,int key)
{
	if(v.size()==0||v[v.size()-1]<=key)
	{
		v.push_back(key);
		return;
	}
	// 2 5 6 8 9       1  
	
	int temp=v[v.size()-1];
	v.pop_back();
	insertion(v,key);
	v.push_back(temp);
}

int main()
{
	
	vector<int>v={2,5,6,8,9};
	int key=1;
	
	insertion(v,key);
	
	for(auto t:v)
	{
		cout<<t<<" ";
	}
}


//NICCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCEEEEEEEEEEEEEEEEEEEEEEEEE
