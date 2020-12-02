#include<bits/stdc++.h>
using namespace std;

#define N 2

int c;

int board[N][N];

void printsol(int board[N][N])
{
	
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<N;j++)
		{
			cout<<board[i][j]<<" ";
		}
		cout<<"\n";
	}
	cout<<"\n";
}

bool check(int board[N][N],int row,int col)
{
	
	// check current row to left
	
 for(int i=0;i<=col;i++)
	{
		if(board[row][i]==1)
		return false;
	}
	
	for(int i=0;i<=row;i++)
	{
		if(board[i][col]==1)
		return false;
	}
	
	return true;
	
}


bool rook_(int board[N][N],int col)
{
	if(col==N)
	{   
	    c++;
		printsol(board);
		return true;
	}
	
	bool res=0;
	
	for(int i=0;i<N;i++)
	{
		if(check(board,i,col)==true)
		{
			board[i][col]=1;
			
			res=rook_(board,col+1)||res;
			
			board[i][col]=0;
		}
		
	}
	return res;
//if(col==N)
//	{
//		c++;
////		cout<<c<<"\t";
//		printsol(board);
//		return true;
//	}
//	
//	bool res=false;
//	for(int i=0;i<N;i++)
//	{
//		if(check(board,i,col)==true)
//		{
//		
//		board[i][col]=1;
//		
//		res=rook_(board,col+1)||res;
//		
//		board[i][col]=0;
//	}
//	}
//	return res;
 
}

int main()
{
	if(rook_(board,0)==false)
	{
		cout<<"No solution";
	}
	
	cout<<c;
}

// todo formulate a solution for a more general case when we have n x n board and k rooks. k<n x n
