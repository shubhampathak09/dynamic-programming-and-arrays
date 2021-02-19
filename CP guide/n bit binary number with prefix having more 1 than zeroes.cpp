#include<bits/stdc++.h>
using namespace std;

int ct=0;

void solve(int n,int ones,int zeroes,string s)
{
	
	if(n==0)
	{
		ct++;
		cout<<s<<endl;
		return;
	}
	
	if(ones>zeroes)
	{
		string op1=s;
		string op2=s;
		op1.push_back('1');
		op2.push_back('0');
		solve(n-1,ones+1,zeroes,op1);
		solve(n-1,ones,zeroes+1,op2);
	}
	else
	{
		string op1=s;
		op1.push_back('1');
		solve(n-1,ones+1,zeroes,op1);
	}
}

int main()
{
	
	
	int n=2;
	
	string s="1";
	
	int ones=1;
	int zeroes=0;
	n=n-1;
	solve(n,ones,zeroes,s);
	cout<<"The number of such strings are."<<ct;
}
