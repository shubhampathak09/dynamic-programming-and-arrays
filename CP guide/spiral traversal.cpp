// print matrix in spiral way

#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	int a[3][6]={{1,2,3},{4,5,6},{7,8,9,16}};  
																	  // 1 2 3 4 5 6 12 18 17 16 15 14 13 7 9  10 11 
																	     
	
	// pointers
	// left,right top and bottom
	
	int left=0;
	int right=2;
	
	int top=0;
	int bottom=2;
	
	int dir=0;
	int counter=0;
	
	while(left<=right&&top<=bottom)
	{
		if(dir==0)
		{
			for(int i=left;i<=right;i++)
			cout<<a[top][i]<<" ";
			top=top+1;
		 
		}
		else if(dir==1)
		{
			for(int i=top;i<=bottom;i++)
			{
				cout<<a[i][right]<<" ";
			}
				right=right-1;
				 
			
		}
		else if(dir==2)
		{
			for(int i=right;i>=left;i--)
			{
				cout<<a[bottom][i]<<" ";
			}
				bottom=bottom-1;
				 
			
		}
		else if(dir==3) // dir==3
		{
			for(int i=bottom;i>=top;i--)
			{
				cout<<a[i][left]<<
				" ";
			}
				left=left+1;
			 
			}
			 dir=(dir+1)%4;
		}
		// counter adjust
	   
	}
	

