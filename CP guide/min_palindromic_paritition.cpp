// min palindromic partitions
#include<bits/stdc++.h>
using namespace std;


// be careful here writting the function to check palindromic you might make mistake like doing i++ and j++
bool ispalindrome(string s1,int i,int j)
{
	while(i<=j)
	{
		if(s1[i]!=s1[j])
		{
		
		return false;
	}
	else
	{
		i++;
		j--;
	}
	}
	return true;
}

//bool ispalindrome(string s,int i,int j)
//{
//	
//	while(i<=j)
//	{
//		if(s[i++]!=s[j--])
//		return false;
//	}
//	return true;
//}

int min_palindromicpartitions(string s,int i,int j)
{
	
	if(i>=j||ispalindrome(s,i,j))
	return 0;
	
//	if(ispalindrome(s,i,j))
//	return 0;
	
	int ans=INT_MAX;
	for(int k=i;k<j;k++)
	{
		int temp=min_palindromicpartitions(s,i,k)+min_palindromicpartitions(s,k+1,j)+1;
		if(temp<ans)
		ans=temp;
	}
	
	return ans;
}

int main()
{
	
	string s="geek";
	//cout<<ispalindrome(s,0,s.length());
	int i=0;
	int j=s.length()-1;
	cout<<min_palindromicpartitions(s,i,j);
}
