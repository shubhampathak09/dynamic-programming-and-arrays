#include<bits/stdc++.h>
using namespace std;

void print(string s,string ans)
{
	if(s.length()==0)
	{
		cout<<ans<<endl;
		return;
	}
	char temp=s[0];
	string op1= ans+string(1,temp);
	string op2=ans+string(1,(char)toupper(temp));
	s.erase(s.begin()+0);
	print(s,op1);
	print(s,op2);
}

int main()
{

string s="abc";

string ans="";

// ab  ab  Ab  aB AB	
//	cout<<(char) toupper('a');
print(s,ans);	
}
