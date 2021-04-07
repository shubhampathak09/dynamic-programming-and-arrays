// if need to generat 1- n subset
#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	
	int n;
	cin>>n;
	
	int total=(1<<n);
	
	for(int i=0;i<total;i++)
	{
		for(int j=0;j<n;j++)
		{
			int x=(1<<j);
			if((i&x)!=0)
			cout<<(j+1)<<" ";
		}
		cout<<endl;
	}
	// need to comeback
	// dont fret
}
