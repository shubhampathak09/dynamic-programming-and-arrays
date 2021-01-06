#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	string s1="abcddf";
	
	string s2="cdfdbsa";
	
	map<char,int>mp;
	for(int i=0;i<s1.length();i++)
	{
		mp[s1[i]]++;
	}
	
	bool flag=true;
	
	int count=mp.size();
	
//	cout<<count;
	
	for(int i=0;i<s2.length();i++)
	{
		if(mp.find(s2[i])!=mp.end())
		{
			mp[s2[i]]--;
			if(mp[s2[i]]==0)
			count--;
		}
		else
		{
			flag=false;
		}
	}
	
//	cout<<count;
	
	if(count==0&&flag)
	cout<<"anagrams";
	else
	cout<<"no";
}
