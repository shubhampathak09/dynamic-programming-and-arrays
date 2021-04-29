// string permutation

#include<bits/stdc++.h>
using namespace std;

void permute(string s,int l,int r)
{
	
	if(l==r)
	{
		cout<<s;
		cout<<endl;
		return;
	}
	else
	{
	
	for(int i=l;i<=r;i++)
	{
		swap(s[l],s[i]);
		permute(s,l+1,r);
		swap(s[i],s[l]);
	
	}}
}

int main()
{
	
	string s="card";
	
	int l=0;
	int r=s.length();
	
	permute(s,0,r-1);
	
}
