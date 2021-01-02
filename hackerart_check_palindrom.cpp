#include<bits/stdc++.h>
using namespace std;

bool checkplain(string s,int i,int j)
{
	if(i>=j)
	return true;
	
	while(i<j)
	{
		if(s[i]!=s[j])
		return false;
		i++;
		j--;
	}
	return true;
}

int main()
{
	
  string s="racecar";
  
cout<<checkplain(s,0,s.length()-1);	
}
