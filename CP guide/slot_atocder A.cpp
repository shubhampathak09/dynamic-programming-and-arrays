#include<bits/stdc++.h>
using namespace std;

bool check_won(string s)

{
	
	int n=s.length();
	
	for(int i=1;i<n;i++)
	{
	if(s[i]!=s[i-1])
	return false;	
	}
	return true;
}




int main()
{

cout<<check_won("SSS")<<endl;

cout<<check_won("WVW");



}
