// good question dp solution is also ez pz try next time:p
#include<bits/stdc++.h>
using namespace std;

bool check(string s1,string s2,string s3,int l1,int l2,int l3,int p1,int p2,int p3)
{
	
	if(p3==l3)
	{
		if(p1==l1&&p2==l2)
		return true;
		else
		return false;
	}
	
	if(p1==l1)
	{
		if(s2[p2]==s3[p3])
		return check(s1,s2,s3,l1,l2,l3,p1,p2+1,p3+1);
		else
		return false;
	}
	 
	
	if(p2==l2)
	{
		if(s1[p1]==s3[p3])
		return check(s1,s2,s3,l1,l2,l3,p1+1,p2,p3+1);
		else
		return false;
	}
	
	
	bool left=false;
	bool right=false;
	
	if(s1[p1]==s3[p3])
	left=check(s1,s2,s3,l1,l2,l3,p1+1,p2,p3+1);
	if(s2[p2]==s3[p3])
	right=check(s1,s2,s3,l1,l2,l3,p1,p2+1,p3+1);
	
	return left||right;
}



int main()
{
	
	string s3="yxx";
	
	string s1="yx";
	
	string s2="x";
	
	int l1=s1.length();  //m
	
	int l2=s2.length();  //n
	
	int l3=s3.length();  //m+n
	
	cout<<check(s1,s2,s3,l1,l2,l3,0,0,0);
	
	
	// o(2^(m+n)) // exponential
}
