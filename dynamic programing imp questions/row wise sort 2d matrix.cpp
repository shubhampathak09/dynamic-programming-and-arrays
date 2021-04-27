#include<bits/stdc++.h>
using namespace std;

#define r 4
#define c 4

int main()
{
	
	
	int mat[r][c]={{8,6,4,5},{3,5,2,1},{9,7,4,2},{7,8,9,5}};
	
	
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			for(int k=0;k<c;k++)
			{
				if(mat[i][k]>mat[i][k+1])
				{
					swap(mat[i][k],mat[i][k+1]);
				}
			}
		}
	}
	
	
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cout<<mat[i][j]<<" ";
		}
		cout<<endl;
	}
	
	cout<<endl;
	
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cout<<mat[i][j]<<" ";
		}
		cout<<endl;
	}
	
}
