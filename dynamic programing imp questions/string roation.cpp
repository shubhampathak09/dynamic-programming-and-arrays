// check for string rotation

#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	string s1="abcde";
	
	string s2="debca";
	
	
	string temp=s1+s1;
	
	if(s1.length()!=s2.length())
	{
		cout<<"nO";
		return 0;
		
	}
	
	if(temp.find(s2)!=string::npos)
	{
		cout<<"BOth string are rotations of each other";
	}
	else
	{
		cout<<"they are not rotations of each other";
	}
	
}
// coool string::npos
