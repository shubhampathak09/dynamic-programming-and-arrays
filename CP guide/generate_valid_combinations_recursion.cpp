//
#include<bits/stdc++.h>
using namespace std;

void generate(string given,int pos,string s)
{
	if(pos==given.length())
	{
		cout<<s<<endl;
		return;
	}
	
	generate(given,pos+1,s+" "+given[pos]);
	generate(given,pos+1,s+given[pos]);
}

int main()
{

string given="1234";
string temp;
temp.push_back(given[0]);
generate(given,1,temp);

}
