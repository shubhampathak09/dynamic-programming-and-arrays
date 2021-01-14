//check if string is plaindrome or not

#include<bits/stdc++.h>
using namespace std;


bool checkpalindrome(string s,int i,int j)
{
	while(i<s.length()&&j>=0)
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
	
	cout<<checkpalindrome("racecar",0,6)<<endl;
	cout<<checkpalindrome("racecax",0,6)<<endl;
}
