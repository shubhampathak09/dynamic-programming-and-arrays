// print all paths with target sum

#include<bits/stdc++.h>
using namespace std;

struct node
{
	int v;
	int t;
	string path;
	
	node(int v,int t,string path)
	{
		this->v=v;
		this->t=t;
		this->path=path;
	}
};


void solve()
{
	
	
	int a[]={4,2,1,7,3};
	
	int n=sizeof(a)/sizeof(a[0]);
	
	int target=10;
	
	int dp[n+1][target+1];
	
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=target;j++)
		{
			if(j==0)
			dp[i][j]=1;
			else if(i==0)
			dp[i][j]=0;
			else
			{
				if(a[i-1]<=j)
				{
					dp[i][j]=dp[i-1][j-a[i-1]]||dp[i-1][j];
				}
				else
				dp[i][j]=dp[i-1][j];
			}
		}
		
	}
	
//	return dp[n][target];

cout<<dp[n][target]<<endl;

    queue<node*>q;
	q.push(node(n,target,""));
	//q.pop();
	
	while(!q.empty())
	{
	//	cout<<"here";
		node *rem=q.front();
	    q.pop();	
	//	cout<<rem->v<<" "<<rem->t;
		if(rem->v==0||rem->t==0)
		{
			//cout<<1;
			cout<<rem->path<<endl;
		}
		else
		{
		int ex=dp[rem->v-1][rem->t];
		
		if(ex==1)
		{
			q.push(new node(rem->v-1,rem->t,rem->path));
		}
		if(a[rem->v-1]<=rem->t)
		{
		
		int inc=dp[rem->v-1][rem->t-a[rem->v-1]];
	    if(inc)
		{
			q.push(new node(rem->v-1,rem->t-a[rem->v-1],to_string(a[rem->v-1])+" "+rem->path));
			}	
	}
		}
	}
}

int main()
{
	
	solve();
	
}
