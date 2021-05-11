#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	
	int mat[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12,},{13,14,15,16}};
	
	
	int left=0;
	int right=3;
	int top=0;
	int bot=3;
	
	int dir=0;
	while(left<=right&&top<=bot)
	{
		
		if(dir==0)
		{
			for(int i=left;i<=right;i++)
			cout<<mat[top][i]<<" ";
			top=top+1;
		}
		else if(dir==1)
		{
			for(int i=top;i<=bot;i++)
			cout<<mat[i][right]<<" ";
			right=right-1;
		}
		else if(dir==2)
		{
			for(int i=right;i>=left;i--)
			cout<<mat[bot][i]<<" ";
			bot=bot-1;
		}
		else if(dir==3)
		{
			for(int i=bot;i>=top;i--)
			cout<<mat[i][left]<<" ";
			left=left+1;
		}
		dir=(dir+1)%4;
	}
	
	// done
}
