// 



// number of ways to evaluate a boolean expression to true



#include<bits/stdc++.h>
using namespace std;

int evaluate(string s,int i,int j,bool istrue)
{
	
	if(i>j)
	return 0;
	
	if(i==j)
	{
		if(istrue==true)
		{
			if(s[i]=='T')
			return true;
			else
			return false;
		}
		else
		{
			if(s[i]=='F')
			{
				return true;
				
			}
			else
			return false;
		}
	}
	
	
	int ans=0;
	for(int k=i+1;k<j;k=k+2)
	{
		int lt=evaluate(s,i,k-1,true);
		int rt=evaluate(s,k+1,j,true);
		int lf=evaluate(s,i,k-1,false);
		int rf=evaluate(s,k+1,j,false);
		
		if(s[k]=='|')
		{
			if(istrue==true)
			{
				ans+=lt*rt+lf*rt+lt*rf;
			}
			else
			ans+=lf*rf;
		}
		else if(s[k]=='&')
		{
			if(istrue==true)
			{
				ans+=lt*rt;
			}
			else
			ans+=lt*rf+lf*rt+lf*rf;
		}
		
		else if(s[k]=='^')
		{
		  if(istrue==true)
		  {
		  	ans+=lt*rf+lf*rt;
		  }
		  else
		  ans+=lt*rt+lf*rf;
		}
	}
	
	return ans;
}


int main()
{
	
	string s="T^F&T";
	
	int n=s.length();
	
	cout<<evaluate(s,0,n-1,true);
}
