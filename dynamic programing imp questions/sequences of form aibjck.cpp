// count subsequence of form a^i.b^j.c^k


#include<bits/stdc++.h>
using namespace std;


int main()
{
	
	string s="abbc";
	
	
	int count1=0; //a
	int count2=0; //ab
	int count3=0; //abc
	
	int n=s.length();
	 
	for(int i=0;i<n;i++)
	{
		if(s[i]=='a')
		{
			count1=2*count1+1;
		}
		else if(s[i]=='b')
		{
			count2=2*count2+count1;
		}
		else
		count3=2*count3+count2;
	}
	
	cout<<count3;
	
}
