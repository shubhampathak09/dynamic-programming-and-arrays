// islands in graph
#include<bits/stdc++.h>
using namespace std;

#define R 5
#define C 5

vector<pair<int,int>>pp={{1,0},{1,1},{0,1},{-1,1},{-1,0},{-1,-1},{0,-1},{1,-1}};

void dfs(int x,int y,int mat[R][C],int visited[R][C])
{
	
	visited[x][y]=1;
	
	for(int i=0;i<8;i++)
	{
		int newx=x+pp[i].first;
		int newy=y+pp[i].second;
		
		if(newx>=0&&newx<R&&newy>=0&&newy<C&&visited[newx][newy]==0&&mat[newx][newy]==1)
		{
			dfs(newx,newy,mat,visited);
		}
	}
}



int main()
{
	
	
	int matrix[R][C]={{1,1,0,0,0},{0,1,0,0,1},{1,0,0,1,1},{0,0,0,0,0},{1,0,1,0,1}};
	
	
	
	int visited[R][C];
	
	for(int i=0;i<R;i++)
	{
		for(int j=0;j<C;j++)
		{
			visited[i][j]=0;
		}
	}
	
	int cc=0;
     	
	for(int i=0;i<R;i++)
	{
		for(int j=0;j<C;j++)
		{
			if(matrix[i][j]&&visited[i][j]==0)
			{
				dfs(i,j,matrix,visited);
				cc++;
			}
		}
	}
	
	
	cout<<"Number of connected components.."<<cc;
}
