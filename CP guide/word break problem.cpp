
//ilovetocode   i love to code
     
#include<bits/stdc++.h>
using namespace std;

bool solve(string sentence,set<string>st)
{
	
	int dp[sentence.length()];
	
	for(int i=0;i<sentence.length();i++)
	dp[i]=0;
	
	for(int i=0;i<sentence.length();i++)
	{
	for(int j=0;j<=i;j++)
	{
			
	string chk=sentence.substr(j,i-j+1);
	if(st.find(chk)!=st.end())
	{
		if(j>0)
		dp[i]+=dp[j-1];
		else
		dp[i]+=1;
	}
}
	}
	
	return dp[sentence.length()-1]>0;
}

int main()
{
	set<string>s={"i","love","to","code"};
	
	string sentence="ilovecode";
	
	cout<<solve(sentence,s);
	
	
	// nice
}
