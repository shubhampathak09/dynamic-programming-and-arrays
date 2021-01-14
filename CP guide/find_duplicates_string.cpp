#include<bits/stdc++.h>
using namespace std;

void printduplicates(string s)
{
	int n=s.length();
	
	int count[26];
	
	memset(count,0,sizeof(count));
	
	for(int i=0;i<n;i++)
	{
		count[s[i]-'a']++;
	}
	
	for(int i=0;i<26;i++)
	{
		if(count[i]>1)
		{
			cout<<char('a'+i)<<endl;
		}
	}
}

int main()
{
	
	string s="geeksforgeeks";
	
	cout<<"Duplicate characters in string are.."<<endl;
	printduplicates(s);
	
}
