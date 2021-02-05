// string compare
#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s="sfcgv";
	string s2="sfcvg";
	
	cout<<s.compare(s2);  // if string is equal this return 0
	
}

bool solve(string s1,string s2)
{
	if(s1.compare(s2)==0)
	return true;
	
	if(s1.length()<=1)
	return false;
	
	int n=s1.length();
	bool result=false;
	
	for(int i=1;i<=n-1;i++)
	{
		if(solve(s1.substr(0,i),s2.substr(0,i))&&solve(s1.substr(i,n-i),s2.substr(i,n-1))||solve(s1.substr(0,i),s2.substr(n-1,i)&&solve(s1.substr(i,n-i),s2.substr(0,n-i))
		{
			result=true;
			break;
		}
	}
	
	return result;
}

// jsut some casual pseudo code

int main()
{
	
	// your test code goes here
}
