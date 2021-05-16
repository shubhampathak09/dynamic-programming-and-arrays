#include<bits/stdc++.h>
using namespace std;


void solve(int op,int cl,string out,vector<string>&res)
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
		solve(op-1,cl,out1,res);
	}
	
	if(cl>op)
	{
		string out2=out;
		out2.push_back(')');
		solve(op,cl-1,out2,res);
	//	return;
	}
}

int main()
{
	
	vector<string>res;
	
	int n=3;
	
	int op=n;
	int cl=n;
	
	string out="";
	
	
	solve(op,cl,out,res);
	
	for(auto x:res)
	{
		cout<<x<<endl;
	}
}

//cool
