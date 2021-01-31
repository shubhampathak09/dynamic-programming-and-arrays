// encode string using recursion

#include<bits/stdc++.h>
using namespace std;

string encode(string s1,int n,string &ans)
{ 

if(s1[n-1]=='0'&&s1.length()==1)
return "01";

if(s1[n-1]=='1'&&s1.length()==1)
return "10";


// reduce the size
string ls=encode(string(1,s1[n-1]),1,ans);
string fs=encode(s1,n-1,ans);
ans=fs+ls;

 
}

int main()
{
	
	
	string var="110";
	
	int n=var.length();
	
	string ans="";
	
	string result=encode(var,n,ans);
	
	cout<<ans;
}
