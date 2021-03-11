#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	string s="abc";
	
	int n=s.length();
	
	int total=(1<<n);
	
	for(int i=0;i<total;i++)
	{
		
		for(int j=0;j<n;j++)
		{
			int x=(1<<j);
			if((x&i)!=0)
			{
				cout<<s[j]<<" ";
			}
		}
		cout<<endl;
	}
	
	
}


// i dont get why ((1<<j)&i) not work in single line?????
