#include<bits/stdc++.h>
using namespace std;

#define V 4


void printsol(int color[])
{
	for(int i=0;i<V;i++)
	{
		cout<<color[i]<<" ";
	}
	cout<<endl;
}

bool issafe(int graph[V][V],int color[])
{
	
	for(int i=0;i<V;i++)
	{
		for(int j=i+1;j<V;j++)
		{
			if(graph[i][j]&&color[i]==color[j])
			return false;
		}
	}
	return true;
}



bool graphcoloring(int graph[V][V],int i,int color[],int m)
{
	
	if(i==V)
	{
		if(issafe(graph,color))
		{
			printsol(color);
			return true;
		}
		return false;
	}
	
	for(int j=1;j<=m;j++)
	{
		
		color[i]=j;
		if(graphcoloring(graph,i+1,color,m)==true)
		return true;
		color[i]=0;
	}
	
	return false;
}

int main()
{
	
	
	int graph[V][V] = {
        { 0, 1, 1, 1 },
        { 1, 0, 1, 0 },
        { 1, 1, 0, 1 },
        { 1, 0, 1, 0 },
    };
	
	int color[V];
	
	for(int i=0;i<V;i++)
	color[i]=0;
	
	
	if(graphcoloring(graph,0,color,3)==false)
	{
		cout<<"no solution";
	}
}
