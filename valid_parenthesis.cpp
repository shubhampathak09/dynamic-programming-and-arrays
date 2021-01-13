#include<bits/stdc++.h>
using namespace std;

bool check(string s)
{
	
	stack<char>st;
	char x;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='('||s[i]=='['||s[i]=='{')
		{
			st.push(s[i]);
		}
		if(st.empty())
		{
			return false;
		}
		
		switch(s[i])
		{
		 	case ')':
			x=st.top();
			st.pop();
			if(x=='['||x=='{')
			return false;
			break;
			
			case '}':
			x=st.top();
			st.pop();
			if(x=='('||x=='[')
			return false;
			break;
			
			case ']':
			x=st.top();
			st.pop();
			if(x=='{'||x=='(')
			return false;
			break;	
		}
	}
	
	if(st.empty())
	return true;
	else
	return false;
}

int main()
{
	string s1="{[()}";
	
	cout<<check(s1);
}
