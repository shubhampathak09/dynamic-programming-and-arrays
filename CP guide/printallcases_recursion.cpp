// all letter lower and uppper case

#include<bits/stdc++.h>
using namespace std;

void printallcases(string in,string out)
{
	if(in.length()==0)
	{
		cout<<out<<endl;
		return;
	}
	
	char temp=in[0];
	string o1=out+string(1,tolower(temp));
	string o2=out+string(1,toupper(temp));
	
	in.erase(in.begin()+0);
	
	printallcases(in,o1);
	printallcases(in,o2);
	
}

int main()
{
	string s1="a1b";
	
	string ans="";
	
	printallcases(s1,ans);
	
}
