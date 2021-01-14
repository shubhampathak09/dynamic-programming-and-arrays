#include<bits/stdc++.h>
using namespace std;


string rev(string s,int n)
{
	
	int m=n/2;  //abcdef
	
	for(int i=0;i<m;i++)
	{
		swap(s[i],s[n-1-i]);
	}
	return s;
}

int main()
{
	
	string s="geeksforgeeks";
	
	int n=s.length();
	
	string temp=rev(s,n);
	
	
	cout<<temp;
}
