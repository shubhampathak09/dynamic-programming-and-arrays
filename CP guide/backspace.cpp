// print all spaces wiith back space

#include<bits/stdc++.h>
using namespace std;


void backspace(string s,string out,int n)
{
	if(n==s.length())
	{
		cout<<out<<endl;
		return;
	}
	backspace(s,out+string(1,s[n]),n+1);
	backspace(s,out+" "+string(1,s[n]),n+1);
}

int main()
{
	
	string s="ABCD";
	string out="A";
	
	backspace(s,out,1);
	
}
