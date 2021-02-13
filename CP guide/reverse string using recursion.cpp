// reverse s string using recusrsion'

#include<bits/stdc++.h>
using namespace std;



void insert(string &s,char x)
{
	if(s.length()==0)
	{
		s.push_back(x);
		return;
	}
	
	char temp=s[s.length()-1];
	s.pop_back();
	insert(s,x);
	s.push_back(temp);
}

void rev(string &s)
{
	
	if(s.length()==1)
	{
		return;
	}
	
	char temp=s[s.length()-1];
	s.pop_back();
	rev(s);
	insert(s,temp);
}


int main()
{
	
	string s="Shubham";
	cout<<s<<endl;
	rev(s);
	cout<<s;
	
}
