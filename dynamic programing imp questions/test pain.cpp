#include<bits/stdc++.h>
using namespace std;


int solve()
{
	
	int R=3;  // cost  with red blue green color
	int C=4; // houses
	
	int cost[R][C]={{1,5,3,1},{5,4,8,2,2},{7,4,9,4}};
	
	int dp1[C]; // to paint last house with red color and 2 adjacent houses are with red col
	int dp2[C]; //paint house with blue and no 2 adjacent houses are in blue
	int dp3[C]; //paint house with green and no 2 adjacen houses are in green
	
	dp1[0]=cost[0][0];
	dp2[0]=cost[1][0];
	dp3[0]=cost[2][0];
	
	for(int i=1;i<C;i++)
	{
		dp1[i]=cost[0][i]+max(dp2[i-1],dp3[i-1]);
		dp2[i]=cost[1][i]+max(dp1[i-1],dp3[i-1]);
		dp3[i]=cost[2][i]+max(dp1[i-1],dp2[i-1]);
	}
	
	return max(dp1[C-1],max(dp2[C-1],dp3[C-1]));
	
}



int main()
{
	
	
}
