#include<bits/stdc++.h>
using namespace std;

bool compare(pair<int,int>&p1,pair<int,int>&p2)
{
	
	return p1.first<p2.first;
	
	
}

int main()
{
	
	vector<pair<int,int>>v={{1,2},{-1,1},{0,1},{5,0},{3,-3}};
	
	
	sort(v.begin(),v.end(),compare);
	
	
	for(auto x:v)
	{
		cout<<x.first<<" "<<x.second;
		cout<<endl;
	}
	
}



// search in a rwo col sorted matrix
// segregate 0 1 2
//print anagrams rtogether
//wave array
//mirror tree
//egg drop
//sort a stack
//squares in n*n chessboard

