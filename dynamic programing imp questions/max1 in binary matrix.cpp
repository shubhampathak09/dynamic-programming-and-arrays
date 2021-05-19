// row with max 1 s

#include<bits/stdc++.h>
using namespace std;


int main()
{
	
	int n=5;
	
	int mat[5][4]={{0,1,0,1},{1,0,1,1},{0,0,1,1},{1,0,0,0},{1,1,1,1}};
	
	
	
	int maxan=0;
	int index=-1;
	
	for(int i=0;i<n;i++)
	{
		int ans=0;
		for(int j=0;j<n;j++)
		{
			if(mat[i][j]==1)
			ans++;
		}
		if(ans>maxan)
		{
			maxan=ans;
			index=i;
		}
	}
	
	cout<<maxan;
	cout<<endl;
	cout<<index;
	
	
}
