//
#include<bits/stdc++.h>
using namespace std;

int count;
int cc;

solve(string s1,string s2)
{
	
	map<char,int>mp;
	
	for(int i=0;i<s2.length();i++)
	{
	mp[s2[i]]++;	
	}
	
	int n=s1.length();
	
	int k=mp.size();
	
	//cout<<k;
	int count=k;
	
	int i=0,j=0;
	
	while(j<n)
	{
		
		if(mp.find(s1[j])!=mp.end())
		{
			mp[s1[j]]--;
			if(mp[s1[j]]==0)
			count--;
		}
		
		if(j-i+1<k)
		{
			j++;
		}
		else if(j-i+1==k)
		{
			if(count==0)
			{
			cout<<s1.substr(i,k)<<endl;
			cc++;
		}
			if(mp.find(s1[i])!=mp.end())
			{
				mp[s1[i]]++;
				if(mp[s1[i]]==1)
				count++;
				
			}
			i++;
		    j++;
		}
	}
	
	cout<<cc;
}

int main()
{
	
	string s1="forxxorfxdofr";
	
	string s2="for";
	
	solve(s1,s2);
	
	
}

// try to attempt first non negtive integer problem :p
