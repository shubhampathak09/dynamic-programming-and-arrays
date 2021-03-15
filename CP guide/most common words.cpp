// leetcode most common word

// given a paragraph find frrequencu of most occuring word but should not be in bad dictionary cool

#include<bits/stdc++.h>
using namespace std;

map<string,int>mp;

void solve(string paragraph,vector<string>bad)
{
	
	// frequencu map
	// word->ocuurent
	
   set<string>compare;
	
	for(auto x:bad)
	{
		compare.insert(x);
	}
	
	string temp="";
	for(auto x:paragraph)
	{
		if(x==' '&&compare.find(temp)==compare.end()) // if the character is a space it mean i have reched end of word
		{
			//cout<<temp<<" ";
			mp[temp]++;
			temp="";
		}
		else
		{
			temp+=x;
		}
	}
	if(compare.find(temp)==compare.end())
	mp[temp]++;  // last word because no space is present after it so it will not go to first if condition,and we add it into map
	
	map<string,int>::iterator it;
	int ovmax=INT_MIN;
	string tp;
	for(it=mp.begin();it!=mp.end();++it)
	{
		//cout<<it->first<<endl;
		 if(it->second>ovmax)
		 {
		 	tp=it->first;
		 	ovmax=it->second;
		 }
	}
	cout<<tp;
}

int main()
{
	
	string paragraph="bob hit a ball the hit ball flew far after it was hit";
	
	vector<string>bad={"hit"};
	
	solve(paragraph,bad);
	
	
}


// pushka blyar fml shit

