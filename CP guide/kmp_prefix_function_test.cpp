// kmp fluent algos

#include<bits/stdc++.h>
using namespace std;



vector<int>kmp_prefix(string s)
{
	int n=s.length();
	vector<int>prefix(n);
	
	prefix[0]=0;
	
	for(int i=1;i<n;i++)
	{
		
		int j=prefix[i-1];
		
		while(j>0&&s[i]!=s[j])
		j=prefix[j-1];
		
		if(s[i]==s[j])
		j++;
		
		prefix[i]=j;
	}
	
	
	return prefix;
}

int main()
{
	string s="AAAA";
	
	vector<int>pref;
	
	pref=kmp_prefix(s);
	
	for(int i=0;i<pref.size();i++)
	cout<<pref[i]<<" ";
	
}
