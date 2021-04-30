// simple regex

#include<bits/stdc++.h>
using namespace std;


string match(string str)
{
	
	regex v4("(2[0-9])");
	
	if(regex_match(str,v4))
	{
		return "Yes";
		 
	}
	else
	return "No";
	
}

int main()
{
	
	
	
	cout<<match("25")<<endl;
	cout<<match("99");
	
	
	
}
