
#include<bits/stdc++.h>
using namespace std;

struct node
{
	int v;
	int w;
	string path;
	
	node(int v,int w,string path)
	{
		this->v=v;
		this->w=w;
		this->path=path;
	}
	
	
};

void solve()
{
	
	int a[]={10,20,30,40};
	int wt[]={60,100,120,50};
	int profit[]={60,100,120,50};
	int w=50;
	
	int n=sizeof(wt)/sizeof(wt[0]);
	
	int dp[n+1][w+1];
	
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=w;j++)
		{
			if(i==0)
			dp[i][j]=0;
			else if(j==0)
			dp[i][j]=0;
			else
			{
				if(wt[i-1]<=j)
				{
					dp[i][j]=max(dp[i-1][j],dp[i-1][j-wt[i-1]]+profit[i-1]);
				}
				else
				dp[i][j]=dp[i-1][j];
			}
		}
		
	}
	
	cout<<dp[n][w];
	
	cout<<endl;
	
	queue<node>q;
	
	
	q.push(node(n,w,""));
	
	while(!q.empty())
	{
        //cout<<1;		
		auto x=q.front();
		q.pop();
	    if(x.v==0||x.w==0)
		{
			cout<<x.path<<endl;
			}	
		else
		{
		
		int incl=dp[x.v-1][x.w-wt[x.v-1]]+profit[x.v-1];
		int excl=dp[x.v-1][x.w];
		
		if(dp[x.v][x.w]==incl)
		{
			q.push(node(x.v-1,x.w-wt[x.v-1],to_string(wt[x.v-1])+x.path));
		}
		if(dp[x.v][x.w]=excl)
		{
			q.push(node(x.v-1,x.w,x.path));
		}
	}
	}
}


int main()
{
	
solve();
	
}



// fuck worse than the last one:P
