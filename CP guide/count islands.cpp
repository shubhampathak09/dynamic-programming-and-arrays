// islands in graph
#include<bits/stdc++.h>
using namespace std;

#define ROW 5
#define COL 5

static int dx[] = { -1, -1, -1, 0, 0, 1, 1, 1 }; 
static int dy[] = { -1, 0, 1, -1, 1, -1, 0, 1 }; 



bool issafe(int x,int y,int mat[][COL])
{
	
	if(x>=0&&x<ROW&&y>=0&&y<COL)
	return true;
	return false;
	
}

void dfs(int mat[ROW][COL],int i,int j)
{
	mat[i][j]=0;
	for(int k=0;k<8;k++)
	{
		if(issafe(i+dx[k],j+dy[k],mat)&&mat[i+dx[k]][j+dy[k]]==1)
		dfs(mat,i+dx[k],j+dy[k]);
	}
}

int main()
{
	

int mat[][COL]={{1,1,0,0,0},{0,1,0,0,1},{1,0,0,1,1},{0,0,0,0,0},{1,0,1,0,1}};
	
/*	1 1 0 0 0
	0 1 0 0 1
	1 0 0 1 1
	0 0 0 0 0
	0 0 0 0 0*/
	int ct=0;
	
	for(int i=0;i<ROW;i++)
	{
		for(int j=0;j<COL;j++)
		{
			if(mat[i][j]==1)
			{
				dfs(mat,i,j);
				ct++;
			}
		}
	}
	
	cout<<ct;
 
}


// fuck it
