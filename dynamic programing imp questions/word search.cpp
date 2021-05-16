// word search

#include<bits/stdc++.h>
using namespace std;
 

int dx[]={1,1,0,-1,-1,-1,0,1};
int dy[]={0,1,1,1,0,-1,-1,-1}; 

#define R 3
#define C 13

bool search(char grid[R][C],int row,int col,string word)
{
	
	if(grid[row][col]!=word[0])
	return false;
	
	for(int dir=0;dir<8;dir++)
	{
		
		int newr=row+dx[dir];
		int newc=col+dy[dir];
		int j;
		
	 
			
			for(j=1;j<word.length();j++)
			{
				if(newr<0||newr>=R||newc<0||newc>=C)
				break;
				
				if(grid[newr][newc]!=word[j])
				break;
				
				newr=newr+dx[dir];
				newc=newc+dy[dir];
			}
		
		    if(j==word.length())
		    return true;
	}
	
	return false;
}

int main()
{
	 
	 char grid[R][C]={{'g','e','e','k','s','f','o','r','g','e','e','k','s'},{'g','e','e','k','s','q','u','i','z','g','e','e','k'},{'i','d','e','q','a','p','r','a','c','t','i','c','e'}};
	 
	 string word="geeks";
	 
	 
	 bool foundflag=false;
	 
	 
    for(int row=0;row<R;row++)
    {
    	for(int col=0;col<C;col++)
    	{
    		if(search(grid,row,col,word))
    		{
    			foundflag=true;
    			cout<<"string found at"<<" "<<row<<" "<<col;
    			cout<<endl;
			}
		}
	}
	
	cout<<foundflag;
	
	 
}
