#include<bits/stdc++.h>
using namespace std;

#define N 8

int ct=0;

void printsol(int board[N][N])
{
	
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<N;j++)
		{
			cout<<board[i][j]<<" ";
		}
		cout<<endl;
	}
}

bool issafe(int board[N][N],int row,int col)
{
	
	int i,j;
	
	for(int i=0;i<col;i++)
	if(board[row][i]==1)
	return false;
	
	
	for(i=row,j=col;i>=0&j>=0;i--,j--)
	if(board[i][j])
	return false;
	
	for(i=row,j=col;i<N&&j>=0;i++,j--)
	if(board[i][j])
	return false;
	
	return true;
}

bool solve(int board[N][N],int col,int q)
{
	
	if(col==N)
	{
		printsol(board);
		cout<<endl;
		ct++;
		return true;
	}
	bool res=false;
	
	for(int i=0;i<N;i++)
	{
		if(issafe(board,i,col))
		{
		
		board[i][col]=1;
		res=solve(board,col+1,q+1)||res;
		board[i][col]=0;
	} 
	}
	return res;
}


int main()
{
	
	int board[N][N];
	
	memset(board,0,sizeof(board));
	
	solve(board,0,0);
	
	cout<<ct;
}
