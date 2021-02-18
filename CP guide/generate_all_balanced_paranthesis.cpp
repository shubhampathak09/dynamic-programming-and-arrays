// generate all balanced paranthesis

#include<bits/stdc++.h>
using namespace std;


void solve(string out,int op,int cl,vector<string>&res)
{
	if(op==0&&cl==0)
	{
		res.push_back(out);
		return;
	}
	
	if(op!=0)
	{
		string out1=out;
		out1.push_back('(');
		solve(out1,op-1,cl,res);
	}
	if(cl>op)
	{
		string out2=out;
		out2.push_back(')');
		solve(out2,op,cl-1,res);
	}
}

int main()
{
	
	int n=3;
	int op=n;
	int cl=n;
	
	vector<string>result;
	string out="";
	
	solve(out,op,cl,result);
	
	for(auto x:result)
	{
		cout<<x<<endl;
	}
}

//sahi hai boss
// revn
