// extract words out of string

#include<bits/stdc++.h>
using namespace std;


void solve()
{
	
	
	vector<string>words;
	
	string s1;
	
	getline(cin,s1);
	
	string wr="";
	for(auto x:s1)
	{
		if(x==' ')
		{
			words.push_back(wr);
			wr="";
		}
		else
		{
			wr+=x;
		}
	}
	// push the last word
	words.push_back(wr);
	for(auto x:words)
	{
		cout<<x<<endl;
	}
}

int main()
{
	
	solve();
	
}
