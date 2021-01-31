// permutation string with space
// goldman sex question
#include<bits/stdc++.h>
using namespace std;



void print(string input,string temp,int pos)
{
	
	if(pos==input.length())
	{
		cout<<temp<<endl;
		return;
	}
	
	print(input,temp+" "+input[pos],pos+1);
	print(input,temp+input[pos],pos+1);
}

int main()
{
	string input="ABCD";
	string temp="";
	temp.push_back(input[0]);
	print(input,temp,1);
}
