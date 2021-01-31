// print all uniqe subsets

#include<bits/stdc++.h>
using namespace std;

void getalluniquesubset(string input,string output,set<string>&sp)
{
	
	if(input.length()==0)
	{
		sp.insert(output);
		return;
	}
	
	string op1=output; // when not included first charchet
	string op2=output; // when include
	
	op2.push_back(input[0]);
	
	input.erase(input.begin()+0);
	
	getalluniquesubset(input,op1,sp);
	getalluniquesubset(input,op2,sp);
	
	
}

int main()
{
	
	
	string input="abcb";
	set<string>sp;
	string output="";
	getalluniquesubset(input,output,sp);
	
	
	for(auto x:sp)
	{
		cout<<x<<endl;
	}
	
}
