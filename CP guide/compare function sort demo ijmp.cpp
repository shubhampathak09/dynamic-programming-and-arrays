#include<bits/stdc++.h>
using namespace std;

bool compare(pair<int,int>p1,pair<int,int>p2)
{
	return p1.first>=p2.first;
}

int main()
{
	
	vector<pair<int,int>>v={{1,2},{0,0},{3,4},{3,2},{5,6}};
	
	
	int n=v.size();
	
	sort(v.begin(),v.end(),compare);
	
	for(auto x:v)
	{
		cout<<x.first<<" "<<x.second;
		cout<<endl;
	}
}

// very very very very import
