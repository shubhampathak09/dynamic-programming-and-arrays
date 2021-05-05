//
#include<bits/stdc++.h>
using namespace std;


void kmp(string s,int prefix[],int n)
{
	
	
//	cout<<1;
	prefix[0]=0;
	
	for(int i=1;i<=n-1;i++)
	{
//		cout<<1;
		int l=prefix[i-1];
		
		while(l>0&&s[i]!=s[l])
		{
			l=prefix[l-1];
		
		}
		if(s[i]==s[l])
		++l;
		
		prefix[i]=l;
	}
	
	
	for(int i=0;i<n;i++)
	{
		cout<<prefix[i]<<" ";
	}
}

int main()
{
	
	// kmp prefix function test
	
	string s="abacaba";
	
	int n=s.length();
	
	int prefix[n];
	
	kmp(s,prefix,n);
	
}



/*
prefix[0]=0;

for(int i=1;i<n;i++)
{
	int l=prefix[i-1];
	while(l>0&&s[i]!=s[l])
	l=prefix[l-1];
	if(s[i]==s[l])
	++l;
	prefix[i]=l;
}
*/
