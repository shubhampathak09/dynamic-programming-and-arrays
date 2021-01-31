// generate all subsets


#include<bits/stdc++.h>
using namespace std;


void all_subsets(string given,string output)
{
	
	if(given.length()==0)
	{
		cout<<output<<endl;
		return;
	}
	string op1=output;
	string op2=output;
	op2.push_back(given[0]);
	
	given.erase(given.begin()+0);
		
	all_subsets(given,op1);
	all_subsets(given,op2);
}

int main()
{
	
string s="abc";

string output="";

int n=s.length();

all_subsets(s,output);	
}
