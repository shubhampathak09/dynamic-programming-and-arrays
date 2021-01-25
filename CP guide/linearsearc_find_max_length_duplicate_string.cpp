// longest consecutive duplicate string

#include<bits/stdc++.h>
using namespace std;
 

int main()
{
	
	
string s;

cin>>s;

int n=s.length();
int k=1;
int maxlen=INT_MIN;
for(int i=1;i<=n-1;i++)	
{
//int k=0;	
if(s[i-1]==s[i])
{
	k++;
	maxlen=max(maxlen,k);
	}
	else
	k=1;	
}

cout<<maxlen;
}
