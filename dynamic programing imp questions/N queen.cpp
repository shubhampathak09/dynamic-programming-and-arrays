// N quuen

#include<bits/stdc++.h>
using namespace std;

#define N 8 

bool check(int row,int col,int board[N][N])
{
	
	int i,j;  //  create variable  i and j  to track the movement in cell 
	
	for(int i=0;i<=col;i++)   // checking left all col in current if the queen is alreay placed
	if(board[row][i])
	return false;
	
	
	for(i=row,j=col;i>=0&&j>=0;i--,j--)   // checking the uppder diagon to chek for if any queen is already placed in upper diagonal to left
	if(board[i][j])
	return false;
	
	for(i=row,j=col;i<N&&j>=0;i++,j--)   //  checking lower diagonal for any queen already placed to left
	if(board[i][j])
	return false;
	
	return true;  // safwe to place
}

bool solveNQueen(int board[N][N],int col)
{
	
	if(col>=N)
	{
		return true;
		
	}
	
	for(int i=0;i<N;i++)
	{
		if(check(i,col,board))
		{
			board[i][col]=1;
			
			if(solveNQueen(board,col+1))
			{
				return true;
			}
			board[i][col]=0;
		}
	}
	
	return false;
}



int main()
{
	
	
	int board[N][N]={{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};
	
	int col=0;
	
	if(solveNQueen(board,col))
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
	
	else
	{
		
		cout<<"No solution";
	}
	
}
