//
/*
A Maze is given as N*N binary matrix of blocks where source block is the upper left most block i.e., maze[0][0] and destination block is lower rightmost block i.e., maze[N-1][N-1]. A rat starts from source and has to reach the destination.
 The rat can move only in two directions: forward and down. 

In the maze matrix, 0 means the block is a dead end and 1 means 
the block can be used in the path from source to destination. 
 that this is a simple version of the typical Maze problem. 
 For example, a more complex version can be that the rat can move in 4 directions
  and a more complex version can be with a limited number of moves.
  */


#include<bits/stdc++.h>
using namespace std;

#define N 4


int tx[]={0,1,0,-1};
int ty[]={-1,0,1,0};

void printsol(int sol[N][N])
{
	
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<N;j++)
		{
			cout<<sol[i][j]<<" ";
		}
		cout<<endl;
	}
}


bool solve(int i,int j,int grid[N][N],int sol[N][N])
{
	
	// visited is zero
	
	if(i==N-1&&j==N-1&&grid[i][j]==1)
	{
		sol[i][j]=1;
		return true;
	}
	
	
	if(i>=0&&i<=N-1&&j>=0&&j<=N-1&&sol[i][j]==0&&grid[i][j]==1)
	{
		
		sol[i][j]=1;
		for(int k=0;k<4;k++)
		{
			int newx=i+tx[k];
			int newy=j+ty[k];
			
			if(solve(newx,newy,grid,sol))
			{
				return true;
			}
		 
		}
		sol[i][j]=0;
	//	return false;
	}
	return false;
 } 
 
 
 int main()
 {
 	int grid[N][N]={{1,0,0,0},{1,1,0,1},{0,1,0,0},{1,1,1,1}};
 	
 	int sol[N][N];
 	
 	
 	for(int i=0;i<N;i++)
 	{
 		for(int j=0;j<N;j++)
 		{
 			cout<<grid[i][j]<<" ";
		 }
		 cout<<endl;
	 }
 	
 	
 	cout<<endl;
 	
 	for(int i=0;i<N;i++)
 	{
 		for(int j=0;j<N;j++)
 		{
 			sol[i][j]=0;
 			
		 }
	 }
 	
 	solve(0,0,grid,sol);
 	
 	
 	
 	for(int i=0;i<N;i++)
 	{
 		for(int j=0;j<N;j++)
 		{
 			cout<<sol[i][j]<<" ";
		 }
		 cout<<endl;
	 }
 }
