// ip v4 address validator

#include<bits/stdc++.h>
using namespace std;

// 122.255.251.4
//0-9
//10-99
//100-199
//200-249
//250-255
string check(string in)
{
	
	
//	regex v4("((([0-9]|[1-9][0-9]|1[0-9][0-9]|2[0-4][0-9]|25[0-5]\\.){3})[0-9]|[1-9][0-9]|1[0-9][0-9]|2[0-4][0-9]|25[0-5])");
     
	regex v4("(((([0-9]|[1-9][0-9]|1[0-9][0-9]|2[0-4][0-9]|25[0-5])\\.){3})([0-9]|[1-9][0-9]|1[0-9][0-9]|2[0-4][0-9]|25[0-5]))");
	 	
	if(regex_match(in,v4))
	{
		return "valid ipv4";
	}
	else
	return "invalid";
}


string check2(string es)
{
	
	//string es=".";
	
	
	regex dot("\\.");
	
	if(regex_match(es,dot))
	{
		return "dot match";
	}
	return "no dot"; 
}

int main()

{
	
	
string in="126.2.26.200";

string i=".";


//cout<<check2(i);	
	
cout<<check(in);	
}


// you miss thr brackets its going to screw you up:-)
