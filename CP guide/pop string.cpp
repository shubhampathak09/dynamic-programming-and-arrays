#include<bits/stdc++.h>
using namespace std;



void revst(string num1,string &res)
{
	
	if(num1.size()==0)
	{
		
		return;
	}
	
	char x=num1.back();
	
	num1.pop_back();
	
	revst(num1,res);
	
}

int main()
{
	string res="";
//	string s="sdcsdv";
//	
////	cout<<s.back();
//	
//	while(s.empty()==false)
//	{
//			cout<<s;
//			s.pop_back();
//			cout<<endl;
//	}
//	
//	

string num1="32145";

revst(num1,res);

cout<<res;
	
}

//fuck itsa

