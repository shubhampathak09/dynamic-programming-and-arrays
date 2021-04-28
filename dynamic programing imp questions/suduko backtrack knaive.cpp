// suduko nacktracking knaive apprach

#include<bits/stdc++.h>
using namespace std;


#define n 9


bool issafe(int grid[n][n],int row,int col,int num)
{
	
	for(int i=0;i<n;i++)
	if(grid[row][i]==num)
	return false;
	
	
	for(int i=0;i<n;i++)
	if(grid[i][col]==num)
	return false;
	
	
	int srow=row-row%3;
	int scol=col-col%3;
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		if(grid[i+srow][j+scol]==num)
		return false;
	}
	
	return true;
	
}

bool solvesudoku(int grid[n][n],int row,int col)
{
	
	if(row==n-1&&col==n)
	return true;
	
	if(col==n)
	{
		row++;
		col=0;
	}
	if(grid[row][col]>0)
	return solvesudoku(grid,row,col+1);
	
	
	for(int i=1;i<=n;i++)
	{
		if(issafe(grid,row,col,i))
		{
			grid[row][col]=i;
			if(solvesudoku(grid,row,col+1))
			return true;
		}
		grid[row][col]=0;
	}
	return false;
}

void printgrid(int grid[n][n])
{
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<grid[i][j]<<" ";
		}
		cout<<"\n";
	}
	
}

int main()
{
	
	int grid[n][n]={ { 3, 0, 6, 5, 0, 8, 4, 0, 0 },
                       { 5, 2, 0, 0, 0, 0, 0, 0, 0 },
                       { 0, 8, 7, 0, 0, 0, 0, 3, 1 },
                       { 0, 0, 3, 0, 1, 0, 0, 8, 0 },
                       { 9, 0, 0, 8, 6, 3, 0, 0, 5 },
                       { 0, 5, 0, 0, 9, 0, 6, 0, 0 },
                       { 1, 3, 0, 0, 0, 0, 2, 5, 0 },
                       { 0, 0, 0, 0, 0, 0, 0, 7, 4 },
                       { 0, 0, 5, 2, 0, 6, 3, 0, 0 } };
                       
                       
	if(solvesudoku(grid,0,0))
	printgrid(grid);
	else
	cout<<"No solution";
}
