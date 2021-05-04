// knights tour problem 
// print the order in whihc knight visits the grdi

#include<bits/stdc++.h>
using namespace std;



#define N 8

int sol[N][N];
int grid[N][N];
//int visited[N][N];

int tx[]={};
int ty[]={};

bool solve(int i,int j,int moves)
{
	
	if(moves==N*N)
	{
		printsol(sol);
		return true;
	}
	
	for(int k=0;k<8;k++)
	{
		int newx=i+tx[k];
		int newy=j+ty[k];
		
		if(newx>=0&&newx<N*N&&newy>=0&&newy<N*N&&sol[newx][newy]==-1)
		{
			sol[newx][newy]=moves
			if(solve(newx,newy,moves+1))
			{
				return true;
			}
			else
			sol[newx][newy]=-1;
		}
	}
	return false
}

int main()
{
	
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<N;j++)
		sol[i][j]=-1;
	}
	
	
	solve(0,0,moves);
	
}
