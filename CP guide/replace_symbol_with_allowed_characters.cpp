// 
#include<bits/stdc++.h>
using namespace std;


bool check(string s)
{
	for(auto x:s)
	{
		if(x=='?')
		return false;
	}
	return true;
}

void replacequestionmarks(string s,int pos)
{
	
	if(check(s))
	{
		cout<<s<<endl;
		return;
	}
	
	if(s[pos]=='0'||s[pos]=='1')
	replacequestionmarks(s,pos+1);
	
	else if(s[pos]=='?')
	{
		s[pos]='1';
		replacequestionmarks(s,pos+1);
		s[pos]='0';
		replacequestionmarks(s,pos+1);
		
	}
	
	
}

int main()
{
	
	string s="??";   // 1 1  // 1 0   // 0 1 //  0 0
	
	replacequestionmarks(s,0);
	
}
