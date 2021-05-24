// minmax sum hackerank

#include<bits/stdc++.h>
using namespace std;


int main()
{
	
	vector<int>v={1,2,3,4,5};
	
	int n=v.size();
	
	
	sort(v.begin(),v.end());
	
	int mn=0;
	int mx=0;
	for(int i=0;i<=n-2;i++)
	{
		mn+=v[i];
		mx+=v[n-1-i];
	}
	
	cout<<mn<<" "<<mx;
	
	
}
