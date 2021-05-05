// print subset sum

#include<bits/stdc++.h>
using namespace std;

//int dp[101][101];


void subsetsum(int a[],int n,int sum)
{

int dp[n+1][sum+1];

for(int i=0;i<=sum;i++)
{
	dp[0][i]=0;
}

for(int i=0;i<=n;i++)
{
	dp[i][0]=1;
	}	
   
   
   for(int i=1;i<=n;i++)
   {
   	for(int j=1;j<=sum;j++)
   	{
   		if(a[i-1]<=j)
   		{
   			dp[i][j]=dp[i-1][j]||dp[i-1][j-a[i-1]];
		   }
		   else
		   dp[i][j]=dp[i-1][j-1];
	   }
   }
queue<pair<pair<int,int>,string>>q;

q.push({{n,sum},""});

while(!q.empty())
{
	
	auto p=q.front();
	q.pop();
	
	if(p.first.first==0&&p.first.second==0)
	{
		cout<<p.second;
		cout<<endl;
	}
	
	int exc=dp[p.first.first-1][p.first.second];
	if(exc)
	{
		q.push({{p.first.first-1,p.first.second},p.second});
	}
	if(p.first.second-a[p.first.first-1]>=0)
	{
	
	int inc=dp[p.first.first-1][p.first.second-a[p.first.first-1]];
	if(inc==1)
	q.push({{p.first.first-1,p.first.second-a[p.first.first-1]},p.second+" "+to_string(a[p.first.first-1])});
}
}

}




int main(){
	

	int a[]={2,3,5,6,8,10};
	
	int n=sizeof(a)/sizeof(a[0]);
	
	int sum=10;
	
    subsetsum(a,n,sum);	
}
