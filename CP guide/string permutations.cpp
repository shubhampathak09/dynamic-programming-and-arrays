
#include<bits/stdc++.h>
using namespace std;

void per(string s,int l,int r)
{
	if(l==r)
	{
		cout<<s<<endl;
		return;
	}
	
	for(int i=l;i<=r;i++)
	{
		if(r-l<=1)
		{
		
		swap(s[l],s[i]);
		per(s,l+1,r);
		swap(s[i],s[l]);  //back track dont see much difference being added here
	}
	}
}

int main()
{
	
	string s="abcd";
	
	int n=s.length();
	
	per(s,0,n-1);
	
	
}
