#include<bits/stdc++.h>
using namespace std;

bool cmp(int a,int b)
{
	
	
	string s1=to_string(a);
	string s2=to_string(b);
	
	return s1+s2>s2+s1;
	
}

int main()
{
	int a[]={3,30,34};
	
	int n=sizeof(a)/sizeof(a[0]);
	
	
	sort(a,a+n,cmp);
	
	string temp="";
		for(int i=0;i<n;i++)
	{
	
	temp+=to_string(a[i]);	
	}
	
	cout<<temp;
	
}
