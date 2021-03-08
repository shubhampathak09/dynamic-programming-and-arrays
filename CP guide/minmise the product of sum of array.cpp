// minimse the sum of products of 2 arrays

#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	cin>>n;
	vector<int>a,b;
	
	for(int i=1;i<=n;i++)
	{
		int x,y;
		cin>>x>>y;
		a.push_back(x);
		b.push_back(y);
	}
	
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());
	
	int ans=0;
	
	for(int i=0;i<n;i++)
	{
		ans+=a[i]*b[n-i-1];
	}
	cout<<ans;
}

int main()
{
	
	solve();
	
}


// Algorith

// take the min from one array multiply with max two minise the overall result
