#include<bits/stdc++.h>
using namespace std;


// some thing
/*
func()
{
	
	string s="dvvfvvfvf";
    
    int n=s.length();
    
    
		
	int prefix[n];
	
	prefix[0]=0;
	
	for(int i=1;i<n;i++)
	{
		
		int l=prefix[i-1];
		while(l>=0&&s[i]!=s[l])
		{
			l=prefix[l-1];
		}
		if(s[i]==s[l])
		{
			l++;
		}
		prefix[i]=l;
	}
}
*/

int main()
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	
	map<char,int>mp;
	int mxf=0;
	for(auto x:s)
	{
		mp[x]++;
		mxf=max(mxf,mp[x]);
	}
	
	cout<<n-mxf;

}

