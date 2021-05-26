#include<bits/stdc++.h>
using namespace std;


int main()
{
	
	string s1="geeksforgeeks a computer science";
	
	string s2="geeks";
	
	
	if(s1.find(s2)!=string::npos)
	{
		cout<<s1.find(s2);
	}
	else
	{
		cout<<"does not exist";
	}
}
