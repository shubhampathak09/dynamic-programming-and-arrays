#include<bits/stdc++.h>
using namespace std;

void solve()
{
	
	int n;
	
	cin>>n;
	
	vector<int>turn;
	for(int i=0;i<n;i++)
	{
		int a;
		cin>>a;
		turn.push_back(a);
	}
	vector<int>prefix(n);
	prefix[0]=turn[0];
	
	for(int i=1;i<n;i++)
	prefix[i]=prefix[i-1]+turn[i];
	
	
	int q;
	cin>>q;
	while (q--)
	{
	int pos;
	cin>>pos;
    int l=0;
	int r=n-1;
		
	while(l<r)
	{
		int mid=(l+r)/2;
		
		if(prefix[mid]>pos)
		{
			r=mid-1;
		}
		else
		{
			l=mid;
		}
	}
	//return l;
	if((n-l)%2==0)
	{
		cout<<"B";
		
	}
	else
	{
		cout<<"A";
	}
}
}

int main()
{
	
	solve();
	
}
