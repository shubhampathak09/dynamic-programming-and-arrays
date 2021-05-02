// scrambled string

#include<bits/stdc++.h>
using namespace std;


bool solve(string s1,string s2)
{
	
	if(s1.compare(s2)==0)
	return true;
	
	if(s1.length()<=1)
	return false;
	
	if(s1.length()!=s2.length())
	return false;
	
	if(s1.length()==0&&s2.length()==0)
	return true;
	
    int n=s1.length();
	
	for(int i=1;i<=n-1;i++)
	{
	
	if((solve(s1.substr(0,i),s2.substr(0,i))&&solve(s1.substr(i,n-i),s2.substr(i,n-1))==true)||(solve(s1.substr(0,i),s2.substr(n-i,i))&&solve(s1.substr(i,n-i),s2.substr(0,n-i))==true))
	return true;	
}
	return false;
}


int main()
{
	
	string s1="abcde";
	
	string s2="caebd";
	
	string s3="coder";
	string s4="ocder";
	
	bool ans=solve(s1,s2);
	bool asn2=solve(s3,s4);
	
	cout<<ans;
	
	cout<<endl;
	
	cout<<asn2;
}
