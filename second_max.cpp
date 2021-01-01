#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	
	int t;
	cin>>t;
	while(t--)
	{
		
		int n;
		int mx=INT_MIN;
		int smax=INT_MIN;
		for(int i=0;i<3;i++)
		{
		
		cin>>n;
		if(n>mx)
		{
		    smax=mx;
			mx=n;
			
		}
		else
		{
			if(smax<n)
			{
				smax=n;
			}
			else
			{
				continue;
			}
		}
	}
	
    cout<<smax<<endl;
	}
	
}
