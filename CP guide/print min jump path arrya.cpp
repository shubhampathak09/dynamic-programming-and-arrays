#include<bits/stdc++.h>
using namespace std;

// print min jump path

struct node
{
	int p,q;
	int jumps;
	string path;
	
	node(int p,int q,int jumps,string path)
	{
		this->p=p;
		this->q=q;
		this->jumps=jumps;
		this->path=path;
	}
	
};



void solve()
{
	
	int a[]={1,2,3,4,1,0}; 
	
	int n=sizeof(a)/sizeof(a[0]);
	
	
	int dp[n];
	
	dp[n-1]=0;
	
	for(int i=n-2;i>=0;i--)
	{
		 if(dp[i]==0)
		 {
		 	dp[i]=INT_MAX;
		 }
		 else
		 {
		 	int mn=INT_MAX;
		 	for(int j=1;j<=a[i]&&i+j<n;j++)
		 	{
		 		mn=min(mn,dp[i+j]);
			 }
			 
			 dp[i]=1+mn;
		 }
		 
	}
	
    queue<node>q;
	
	q.push(node(0,a[0],dp[0],"0"));	
	
	while(!q.empty())
	{
		auto x=q.front();
		q.pop();
		
		if(x.p==n-1)
		{
			
			cout<<x.path;
			cout<<endl;
		}
		for(int i=1;i<=x.q&&x.p+i<n;i++)
		{
			if(dp[x.p+i]==x.jumps-1)
			q.push(node(x.p+i,a[x.p+i],dp[x.p+i],x.path+to_string(x.p+i)));
		}
	}
}

int main()
{
	 
	 solve();
	 
}

// we;ll we eill retry:p interesting
