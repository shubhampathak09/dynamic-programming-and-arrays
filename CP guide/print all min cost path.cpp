//  bfs +dp
#include<bits/stdc++.h>
using namespace std;

struct node
{
	int i;
	int j;
	string s;
	
	node(int i,int j,string s)
	{
		this->i=i;
		this->j=j;
		this->s=s;
	}
};

void solve()
{
	
int n,m;
cin>>n>>m;

int cost[n][m];

for(int i=0;i<n;i++)
{
	for(int j=0;j<m;j++)
	{
		cin>>cost[i][j];
	}
}
int dp[n][m]; 	
	
for(int i=n-1;i>=0;i--)
{
	for(int j=m-1;j>=0;j--)
	{
		if(i==n-1&&j==m-1)
		{
			dp[i][j]=cost[i][j];
		}
		else if(i==n-1)
		{
			dp[i][j]=dp[i][j+1]+cost[i][j];
		}
		else if(j==m-1)
		{
		   dp[i][j]=dp[i+1][j]+cost[i][j];	
		}
		else
		{
			dp[i][j]=cost[i][j]+min(dp[i+1][j],dp[i][j+1]);
		}
	}
}

//cout<<"here";

cout<<dp[0][0]<<" ";


for(int i=0;i<n;i++)
{
	for(int j=0;j<m;j++)
	{
		cout<<dp[i][j]<<" ";
	}
	cout<<endl;
}

queue<node>q;



q.push(node(0,0,""));

while(!q.empty())
{
	
	auto x=q.front();
	q.pop();
	if(x.i==n-1&&x.j==m-1)
	{
		cout<<x.s<<endl;
		
	}
	else if(x.i==n-1) // last row
	{
		q.push(node(x.i,x.j+1,x.s+'h'));
	}
	else if(x.j==m-1)
	{
		q.push(node(x.i+1,x.j,x.s+'v'));
	}
	else
	{
	
	if(dp[x.i+1][x.j]<dp[x.i][x.j+1])
	{
		q.push(node(x.i+1,x.j,x.s+"v"));
	}
	else if(dp[x.i+1][x.j]>dp[x.i][x.j+1])
	{
		q.push(node(x.i,x.j+1,x.s+'h'));
	}
	else
	{
		q.push(node(x.i+1,x.j,x.s+'v'));
		q.push(node(x.i,x.j+1,x.s+'h'));
	}
}
}
	
}

int main()
{
	
	solve();
	
}
