#include<bits/stdc++.h>

using namespace std;


bool cmp(string a,string b)
{
	
	return a+b>b+a;
	
}


int main()
{
	
	vector<int>nums={3,12,30,4,5};
	
	
	vector<string>ans;
	
	for(auto x:nums)
	{
	ans.push_back(to_string(x));	
	}
	
	sort(ans.begin(),ans.end(),cmp);
	
	if(ans[0]=="0")
	{
		cout<<"0";
		return 0;
	}
	
	string res="";
	
	for(auto x:ans)
	{
		res+=x;
	}
	
	
	
	
	cout<<res;
	
	return 0;
}
