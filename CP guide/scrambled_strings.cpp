// scranmbled strings
#include<bits/stdc++.h>
using namespace std;
//a a a b c
//  0 1 2 3 4

bool isscramble(string s1,string s2)
{
	
	if(s1.length()!=s2.length())
	return false;
	
	int n=s1.length();
	if(n==0)
	return true;
	
	if(s1.compare(s2)==true)
	return true;
	
	if(s1.length()<=1)
	return false;
	
	bool flag=false;
	for(int i=1;i<=n-1;i++)
	{
		if(isscramble(s1.substr(0,i),s2.substr(0,i))&&isscramble(s1.substr(i,n-i),s2.substr(i,n-i))||isscramble(s1.substr(0,i),s2.substr(n-i,i))&&isscramble(s1.substr(i,n-i),s2.substr(0,n-i)))
		{
			flag=true;
			break;
		}
	}
	return flag;
}


int main()
{
	
	string s1="eat";
	
	string s2="ate";
	
	cout<<isscramble(s1,s2);
}
