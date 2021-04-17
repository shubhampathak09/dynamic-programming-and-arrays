#include<bits/stdc++.h>
using namespace std;


bool ispalindrome(string str,int i,int j)
{
	while(i<j)
	{
		if(str[i]!=str[j])
		return false;
		i++;
		j--;
	}
	return true;
}

void allpartutil(vector<vector<string> >&allpart,vector<string>currpar,int start,int n,string str)
{
	
	if(start>=n)
	{
		
		allpart.push_back(currpar);
		return;
	}
	
	for(int i=start;i<n;i++)
	{
		if(ispalindrome(str,start,i))
		{
			currpar.push_back(str.substr(start,i-start+1));
			
			allpartutil(allpart,currpar,i+1,n,str);
			
			currpar.pop_back();
		}
	}
}
void allpart(string st)
{
	
	int n=st.length();
	
	vector<vector<string>>allpar;
	
	vector<string>currpar;
	
	allpartutil(allpar,currpar,0,n,st);
	
	 for(int i=0;i<allpar.size();i++)
	 {
	 	for(int j=0;j<allpar[i].size();j++)
	 	{
	 		cout<<allpar[i][j]<<" ";
		 }
		 cout<<endl;
	 }
}

int main()
{
	
string str="nitin";

allpart(str); 	
}
