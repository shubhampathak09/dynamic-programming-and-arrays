// game of strings

#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	string s;
	cin>>s;
	
	cout<<s<<endl;
	
	for(int i=0;i<s.length();i++)
	{
		if(i%2==0)
		{
		
		if(s[i]=='a')
		{
			s[i]='b';
		}
		else
		s[i]='a';
	}
	else
	{
		if(s[i]=='z')
		{
			s[i]='y';
		}
		else
		s[i]='z';
	}
	}
	cout<<s;
	
}
