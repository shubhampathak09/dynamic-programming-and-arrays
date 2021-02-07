#include<bits/stdc++.h>
using namespace std;

void solve(string s,string result,map<char,vector<char>>mp,int k)
{
	
	if(s.length()==0)
	{
		cout<<result<<endl;
		return;
	}
	
	char x=s[0];
	s.erase(s.begin()+0);
	for(int i=0;i<mp[x].size();i++)
	{
		char y=mp[x][i];
		result=result+string(1,y);
		solve(s,result,mp,k);
	}
	//result.pop_back();
}

int main()
{
	
	
//	2-{a,b,c}
  //  3-{d,e,f};
  
  
  map<char,vector<char>>mp;
  
  mp['2']={'a','b','c'};
  mp['3']={'d','e','f'};
  
  string s="23";
  
  int k=s.length();
 // cout<<mp['2'][0];
  
  solve("23","",mp,k);	
	
}
