#include<bits/stdc++.h>
using namespace std;


struct node
{
	int len;
	int index;
	int value;
	string path;
	
	node(int len,int index,int value,string path)
	{
		this->len=len;
		this->index=index;
		this->value=value;
		this->path=path;
		
	}
};

void solve()
{
	
	int a[]={10,22,42,33,21,50,41,60,80,3};
	
	int n=sizeof(a)/sizeof(a[0]);
	
	int dp[n];
	
		int omx=INT_MIN;
		int oi;
	for(int i=0;i<n;i++)
	{
		
		int mx=0;
	
		for(int j=0;j<i;j++)
		{
			if(a[j]<=a[i])
			{
				if(dp[j]>mx)
				{
					mx=dp[j];
				}
			}
			dp[i]=1+mx;
			if(omx<dp[i])
			{
				omx=dp[i];
				oi=i;
			}
		}
	}
	cout<<omx<<" "<<oi;
    cout<<endl;	
	
	queue<node>q;
	
	q.push(node(omx,oi,a[oi],to_string(a[oi])+""));
	
	while(!q.empty())
	{
		
		auto x=q.front();
		
		if(x.len==1)
		{
			cout<<x.path;
			cout<<endl;
		}
		q.pop();
		for(int i=0;i<x.index;i++)
		{
			if(dp[i]=x.len-1&&a[i]<=x.value)
			{
				q.push(node(dp[i],i,a[i],to_string(a[i])+x.path));
			}
		}
	}
	
}


int main()
{
	
solve();
	
}

// fml^3
