// mobile keypad mapping

#include<bits/stdc++.h>
using namespace std;

int main()
{
	//string s="2.33.222.33";
	map<string,char>mp;
	
	mp["2"]='a';
	mp["22"]='b';
	mp["222"]='c';
	
	mp["3"]='d';
	mp["33"]='e';
	mp["333"]='f';
	
	
	
	mp["4"]='g';
	mp["44"]='h';
	mp["444"]='i';
	
	mp["5"]='j';
	mp["55"]='k';
	mp["555"]='l';
	
	mp["6"]='m';
	mp["66"]='n';
	mp["666"]='o';
	
	 
	
	mp["7"]='p';
	mp["77"]='q';
	mp["777"]='r';
	mp["7777"]='s';
	
	
    mp["8"]='t';
	mp["88"]='u';
	mp["888"]='v';
	
	mp["9"]='w';
	mp["99"]='x';
	mp["999"]='y';
	mp["9999"]='z';
	
	
	//string s="55.66.666";
	string s="2.3.4";
	string decode="";
	
	int n=s.length();
	int l=0;
	int prev=-1;
	for(int i=0;i<n;i++)
	{
	if(s[i]=='.')
	{
		char x=mp[s.substr(l,i-l)];
	//	cout<<curr<<endl;
		decode.push_back(x);
		l=i+1;
		}	
	}
	char y=mp[s.substr(l)];
//	decode.push_back(s.substr(l));
//	cout<<s.substr(l);
     decode.push_back(y);
cout<<decode;
}


// fuck
