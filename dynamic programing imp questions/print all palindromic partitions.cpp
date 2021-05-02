// print all palindromic partition

#include<bits/stdc++.h>
using namespace std;

 


bool ispalindrome(string s,int low,int high)
{
	
	while(low<high)
	{
		if(s[low]!=s[high])
		return false;
		
		low++;
		high--;
	}
	return true;
}

void palindromepartiton(string s,int start,int n,vector<string>&current,vector<vector<string>>&allp)
{
	
	
	if(start>=n)
	{
		
		allp.push_back(current);
		return;
		
	}
	
	
	for(int i=start;i<=n-1;i++)
	{
		
		if(ispalindrome(s,start,i))
		{
			
			current.push_back(s.substr(start,i-start+1));
			palindromepartiton(s,i+1,n,current,allp);
			current.pop_back();
		}
		
		
		
	}
	
}



int main()
{
	
	
	string s="nitin";
	
	
	int start=0;
	
	int n=s.length();
	
	vector<string>current;
	
	vector<vector<string>>allp;
	
	palindromepartiton(s,start,n,current,allp);
	
	
	for(int i=0;i<allp.size();i++)
	{
		for(int j=0;j<allp[i].size();j++)
		{
			cout<<allp[i][j]<<" ";
			
		}
		cout<<endl;
	}
	
	cout<<"Number of palindromic partitionss "<<allp.size()<<endl;
}
