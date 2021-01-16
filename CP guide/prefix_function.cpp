#include<bits/stdc++.h>
using namespace std;

void cal_lcs(string s)
{
	int n=s.length();
	int prefix[n];
	prefix[0]=0;
	
	for(int i=1;i<n;i++)
	{
		
		int l=prefi
		x[i-1];
		
		while(l>0&&s[i]!=s[l])
		{
			l=prefix[l-1];
		}
		if(s[i]==s[l])
		{
			l++;
		}
		prefix[i]=l;
	}
	for(auto x:prefix)
	{
		cout<<x<<" ";
	}
}

int main()
{
	string s="dvfvdfvdfcd";
	
	cal_lcs(s);
}
