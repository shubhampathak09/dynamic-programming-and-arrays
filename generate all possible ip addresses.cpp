// generate ip address

//25525511135
//0-255
//0-9
//10-99
//100-199
//200-249
//250-255
#include<bits/stdc++.h>
using namespace std;


bool isvalid(string ip)
{
	
	regex v4("[0-9]|[1-9][0-9]|1[0-9][0-9]|2[0-4][0-9]|25[0-5]");
	
	if(regex_match(ip,v4))
	return true;
	return false;
}

int main()
{
	
	
//	string s="25505011535";
	string s="2552551113512";
	int n=s.length();
	 
	
	vector<string>res; 
	  
	for(int i=1;i<=3&&i<n;i++)
	{
		string first=s.substr(0,i);
		if(isvalid(first))
		{
		 
			for(int j=1;j<=3&&i+j<n;j++)
			{
				string second=s.substr(i,j);
				if(isvalid(second))
				{
					for(int k=1;k<=3&&i+j+k<n;k++)
					{
						string third=s.substr(i+j,k);
						string fourth=s.substr(i+j+k);
						
						if(isvalid(third)&&isvalid(fourth))
						{
						string ans=first+"."+second+"."+third+"."+fourth;
						
						res.push_back(ans);	
						}
					}
				}
			}
		}
	}
	
	if(res.size()==0)
	{
		cout<<"No valid ip address combinations";
		return 0;
	}
	
	for(auto x:res)
	{
		cout<<x<<endl;
	}
	 
}

// unable to solve this problem since aug 2019
// today finallyb solved it:P 30 aprl 2021
