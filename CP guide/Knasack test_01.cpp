/*
nput: Profits[] = {60, 100, 120, 50}
Weights[] = {10, 20, 30, 40}, W = 40
Output:
10: 60, 20: 100,
10: 60, 30: 120,
Maximum Profit = 180
*/

#include<bits/stdc++.h>
using  namespace std;


struct node
{
	int i;
	int j;
	
	string path;
	
	node(int i,int j,string path)
	{
		this->i=i;
		this->j=j;
		this->path=path;
	}
	
};

void solve()
{
	
	int wt[]={10,20,30,40};
	int profit[]={60,100,120,50};
	int w=50;
	
	int n=sizeof(wt)/sizeof(wt[0]);
	
	int dp[n+1][w+1];
	
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=w;j++)
		{
			if(i==0||j==0)
			dp[i][j]=0;
			else if(wt[i-1]<=j)
			{
				dp[i][j]=max(dp[i-1][j],profit[i-1]+dp[i-1][j-wt[i-1]]);
			}
			else
			dp[i][j]=dp[i-1][j];
		}
	}
	
	cout<<dp[n][w]<<endl;
	
	queue<node*>q;
	
	q.push(new node(n,w,""));
	
	while(!q.empty())
	{
		auto x=q.front();
		q.pop();
	    cout<<1;
		if(x->i==0&&x->j==0)
		{
			cout<<x->path<<endl;
		}
		else
		{
				
		if(x->j>=wt[x->i-1])
		{
		
		int incl=dp[x->i-1][x->j-wt[x->i-1]];
		int excl=dp[x->i-1][x->j];
		if(incl>excl)
		{
			q.push(new node(x->i-1,x->j-wt[x->i-1],to_string(wt[x->i-1])+x->path));
		}
		else if(excl>incl)
		{
			q.push(new node(x->i-1,x->j,x->path));
		}
		else  //(incl==excl)
		{
			q.push(new node(x->i-1,x->j-wt[x->i-1],to_string(wt[x->i-1])+x->path));
			q.push(new node(x->i-1,x->j,x->path));
		}
	}   else
	{
		int excl=dp[x->i-1][x->j];
		q.push(new node(x->i-1,x->j,x->path));
	}
}
}
}
int main()
{
	
	solve();
	
}


// fml what the fuck did i dp in this
