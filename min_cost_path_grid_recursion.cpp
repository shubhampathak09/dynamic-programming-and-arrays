// min cost path in matrix

//mincost(m,n)=min(mincost(m-1,n),mincost(m,n-1),mincost(m-1,n-1)) +cost[m][n];

// recursive implementation

#include<bits/stdc++.h>
using namespace std;

#define N 3

int mincost(int m,int n,int grid[N][N])
{
	
	if(m<0||n<0)
	return INT_MAX;
	
	else if(m==0&&n==0)
	return grid[0][0];
	
	else
    return grid[m][n]+min(mincost(m-1,n,grid),min(mincost(m,n-1,grid),mincost(m-1,n-1,grid)));
	
}

int main()
{
	
	int grid[N][N]={{1,2,3},{4,8,2},{1,5,3}};
	
	cout<<mincost(2,2,grid);
	
}
