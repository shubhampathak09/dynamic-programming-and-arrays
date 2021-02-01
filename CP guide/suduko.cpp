// solve sudoku

#include<bits/stdc++.h>
using namespace std;

bool issafe(int grid[9][9],int row,int col,int val)
{
	for(int i=0;i<=8;i++)
	if(grid[row][i]==val)
	return false;
	
	for(int i=0;i<=8;i++)
	if(grid[i][col]==val)
	return false;
	
	// 3 x 3 grid
	int srow=row-row%3;
	int yrow=col-col%3;
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(grid[i+srow][j+yrow]==val)
			return false;
		}
	}
	
	return true;
}


bool solvesuduko(int grid[9][9],int row,int col)
{
	if(row==8&&col==9)
	{
		return true;
	}
	
	if(col==9)
	{
		col=0;
		row++;
	}
	
	if(grid[row][col]>0)
	{
		return solvesuduko(grid,row,col+1);
	}
	
	for(int i=1;i<=9;i++)
	{
	   if(issafe(grid,row,col,i))
	   {
	   	grid[row][col]=i;
	   	
	   	if(solvesuduko(grid,row,col+1))
	   	return true;
	   	
		   }
		   grid[row][col]=0;	
	}
	
	return false;
}

void printsol(int grid[9][9])
{
	for(int i=0;i<9;i++)
	{
		for(int j=0;j<9;j++)
		{
			cout<<grid[i][j]<<" ";
		}
		cout<<endl;
	}
}


int main()
{
	
	
	int grid[9][9]={ { 3, 0, 6, 5, 0, 8, 4, 0, 0 },
                       { 5, 2, 0, 0, 0, 0, 0, 0, 0 },
                       { 0, 8, 7, 0, 0, 0, 0, 3, 1 },
                       { 0, 0, 3, 0, 1, 0, 0, 8, 0 },
                       { 9, 0, 0, 8, 6, 3, 0, 0, 5 },
                       { 0, 5, 0, 0, 9, 0, 6, 0, 0 },
                       { 1, 3, 0, 0, 0, 0, 2, 5, 0 },
                       { 0, 0, 0, 0, 0, 0, 0, 7, 4 },
                       { 0, 0, 5, 2, 0, 6, 3, 0, 0 } };
                       
                       
bool result=solvesuduko(grid,0,0);
if(result)
printsol(grid);
else
cout<<"No sol";

	
return 0;	
	// fuck my life :p
	
	// fixed it
}
