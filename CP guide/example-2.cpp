#include<bits/stdc++.h>
using namespace std;

void permutation(string given,int count,string result)
{
	
	if(count==0)
	{
		cout<<result<<endl;
		return;
	}
	string out=result;
	for(int i=0;i<given.length();i++)
	{
		out.push_back(given[i]);
	//	result.push_back(given[i]);
		permutation(given,count-1,out);
		out.pop_back();
	}
	
}

int main()
{
	
	string s="abcd";
	
	int k=2;
	
	string result="";
	
	permutation(s,k,result);
}
