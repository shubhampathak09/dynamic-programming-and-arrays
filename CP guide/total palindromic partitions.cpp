// total palindormci partition
#include<bits/stdc++.h>
using namespace std;

bool ispal(string s,int i,int j)
{
	while(i<=j)
	{
		if(s[i]!=s[j])
		return false;
		i++;
		j--;
	}
	return true;
}
int ans;

int solve(string s,int i,int j)
{
	if(i==j||ispal(s,i,j))
	{
		return 0;
	}
	
	int ans=INT_MAX;
	
	for(int k=i;k<j;k++)
	{
		int temp=solve(s,i,k)+solve(s,k+1,j)+1;
		ans=min(temp,ans);
	}
	return ans;
}

int main()
{
	
	cout<<solve("geek",0,3);
	
}
