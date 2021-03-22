// generalised sudoko solver

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>board;


void printsol(vector<vector<int>>board)
{
	
	for(int i=0;i<board.size();i++)
	{
		for(int j=0;j<board[i].size();j++)
		{
			cout<<board[i][j]<<" ";
		}
		cout<<endl;
	}
	
}

bool issafe(vector<vector<int>>board,int row,int col,int num)
{
	
	for(int i=0;i<board.size();i++)
	{
		if(board[row][i]==num)
		return false;
	}
	for(int i=0;i<board.size();i++)
	{
		if(board[i][col]==num)
		return false;
	}
	
	int sr=row-row%3;
	int sc=col-col%3;
	
	for(int i=0;i<sr;i++)
	{
		for(int j=0;j<sc;j++)
		{
			if(board[i+sr][j+sc]==num)
			return false;
		}
	}
	return true;
}

bool solve(vector<vector<int>>board,int row,int col)
{
	//cout<<"dc";
	//cout<<board.size();
	if((row==board.size()-1)&&(col==board.size()))
	{
		return true;
	}
	
	if(col==board.size())
	{
	    col=0;
		row++;
	}
	
	if(board[row][col]>0)
	return solve(board,row+1,col);
	
	for(int i=1;i<=board.size();i++)
	{
		if(issafe(board,row,col,i))
		{
			board[row][col]=i;
			
			if(solve(board,row+1,col))
			return true;
			
			
		}
		board[row][col]=0;
	}
	return false;
}

int main()
{
	
int n;

cin>>n;

board.resize(n);

for(int i=0;i<n;i++)
{
	board[i].resize(n);
	}	


for(int i=0;i<n;i++)
{
	for(int j=0;j<n;j++)
	{
		cin>>board[i][j];
	}
}

bool result=solve(board,0,0);

//if(result)
//{
//	printsol(board);
//	}	
//else
//{
//	cout<<"No sol";
//	}	
}


/*
9
3 0 6 5 0 8 4 0 0
5 2 0 0 0 0 0 0 0
0 8 7 0 0 0 0 3 1
0 0 3 0 1 0 0 8 0
9 0 0 8 6 3 0 0 5
0 5 0 0 9 0 6 0 0
1 3 0 0 0 0 2 5 0
0 0 0 0 0 0 0 7 4
0 0 5 2 0 6 3 0 0
*/
