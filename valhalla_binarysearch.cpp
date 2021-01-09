#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	int n,q;
	
	cin>>n>>q;
	vector<int>w;
	vector<int>partialsum(n,0);
	for(int i=0;i<n;i++)
	{
		int a;
		cin>>a;
		w.push_back(a);
	}
	partialsum[0]=w[0];
	for(int i=1;i<n;i++)
	{
		partialsum[i]=partialsum[i-1]+w[i];
	}
//	1 3 4 6 7
//	for(auto x:partialsum)
//	{
//		cout<<x<<" ";
//	}
vector<int>arrows;
    for(int i=0;i<q;i++)
    {
    	int a;
    	cin>>a;
    	arrows.push_back(a);
    	
	}
	int d=0;
	
	for(auto x:arrows)
	{
		d+=x;
		if(d>arrows.back())
		d=0;
		
		auto it=lower_bound(partialsum.begin(),partialsum.end(),d);
		cout<<distance(it,partialsum.end())-(*it==d)<<endl;
	}
}
