// time taken to rot all oranges
#include<bits/stdc++.h>
using namespace std;

#define R 3
#define C 5


int maxtimer;


struct node
{
	int timer;
	int x;
	int y;
	node(int timer,int x,int y)
	{
		this->timer=timer;
		this->x=x;
		this->y=y;
	}
};


int dx[]={1,0,-1,0};
int dy[]={0,1,0,-1};

int main()
{

int arr[R][C] = { {2, 1, 0, 2, 1},
                     {1, 0, 1, 2, 1},
                     {1, 0, 0, 2, 1}};

/*
0: Empty cell
1: Cells have fresh oranges
2: Cells have rotten oranges
*/

queue<node>q;

for(int i=0;i<R;i++)
{
	for(int j=0;j<C;j++)
	{
		if(arr[i][j]==2)
		q.push(node(0,i,j));
	}
}


while(!q.empty())
{
	auto current=q.front();
	maxtimer=max(maxtimer,current.timer);
	q.pop();
	for(int i=0;i<4;i++)
	{
		int newx=current.x+dx[i];
		int newy=current.y+dy[i];
		
		if(newx>=0&&newx<R&&newy>=0&&newy<C&&arr[newx][newy]==1)
		{
			q.push({current.timer+1,newx,newy});
			arr[newx][newy]=2;
		}
	}
}

for(int i=0;i<R;i++)
{
	for(int j=0;j<C;j++)
	{
		if(arr[i][j]==1)
		{
			cout<<"Not possible";
			return 0;
		}
	}
}

cout<<maxtimer;

}


