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


void solve(string s,int pos)
{
	if(check(s))
	{
		cout<<s<<endl;
		return;
	}
    
    if(s[pos]=='1'||s[pos]=='0')
    solve(s,pos+1);
    else if(s[pos]=='?')
    {
    	s[pos]='0';
    	solve(s,pos+1);
    	s[pos]='1';
    	solve(s,pos+1);
	}
}


int main()
{
	
	string s="0??1";
	
	
	solve(s,0);
}
