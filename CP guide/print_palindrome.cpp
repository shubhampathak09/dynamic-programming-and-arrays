#include<bits/stdc++.h>
using namespace std;

bool ispalindrome(string s,int i,int j)
{
	while(i<j)
	{
		if(s[i++]!=s[j--])
		{
			return false;
		}
		
	}
	return true;
	
}


void generate_strings(string input,vector<string>&result,int start,int end)
{
	
	if(start>=end)
	{
		for(auto x:result)
		{
			cout<<x<<" ";
		}
		cout<<endl;
		return;
	}
	
	for(int i=start;i<end;i++)
	{
		
		if(ispalindrome(input.substr(start,i-start+1),start,i))
		{
			
			result.push_back(input.substr(start,i-start+1));
			generate_strings(input,result,i+1,end);
			result.pop_back();
		}
		
	}
	
}

int main()
{
	
	string str="nitin";
	int n=str.length();
	vector<string>result;
	generate_strings(str,result,0,n);
	
}
