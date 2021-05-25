#include<bits/stdc++.h>
using namespace std;


int main()
{
	
int mat[4][4] = { {10, 20, 30, 40},
                      {15, 25, 35, 45},
                      {27, 29, 37, 48},
                      {32, 33, 39, 50}};
	
	
	
	int key=29;
	
	int updatei=-1;
	int updatej=-1;
	
	
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			if(mat[i][j]==key)
			{
				 updatei=i;
				 updatej=j;
			}
		}
	}
	
	
	if(updatei!=-1&&updatej!=-1)
	cout<<updatei<<" "<<updatej;
	else
	cout<<"no solution";
	
	
}
