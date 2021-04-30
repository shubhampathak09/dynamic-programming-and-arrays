// dungeon game

#include<bits/stdc++.h>
using namespace std;


int abs(int x)
{
	return x >=0 ? x : -1*x;
}

int main()
{
	
	
	int dungeon[3][3]={{-2,-3,3},{-5,-10,1},{10,30,-5}};
	
	int dp[3][3];
	
	
	for(int i=2;i>=0;i--)
	{
		for(int j=2;j>=0;j--)
		{
			
			if(i==2&&j==2)
			{
				dp[i][j]=min(0,dungeon[2][2]);
			}
			else if(i==2)
			{
				dp[i][j]=(dungeon[i][j]+dp[i][j+1])>0 ? 0 :dungeon[i][j]+dp[i][j+1];
			}
			else if(j==2)
			{
				dp[i][j]=(dungeon[i][j]+dp[i+1][j])>0 ? 0:dungeon[i][j]+dp[i+1][j];
			}
			else
			{
				int val=max(dp[i+1][j],dp[i][j+1])+dungeon[i][j];
				if(val>0)
				dp[i][j]=0;
				else
				dp[i][j]=val;
			}
		}
	}
	
	int res=abs(dp[0][0])+1;
	
	
	cout<<res;
}
