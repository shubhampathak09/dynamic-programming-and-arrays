#include<bits/stdc++.h>
using namespace std;

//vector<int>vertex()

const int V=6;

int graph[V][V];


int selectmin(vector<int>value,vector<bool>&setMST)
{
	
	int mn=INT_MAX;
	int vertex=0;
	for(int i=0;i<V;i++)
	{
		if(setMST[i]==false&&value[i]<mn)
		{
			mn=value[i];
			vertex=i;
		}
	}
	return vertex;
}

void findmst(int graph[V][V])
{
	
	int parent[V]; //stores the mst
	vector<int> value(V,INT_MAX);
	vector<bool>setMST(V,false);
	
	parent[0]=-1;
	value[0]=0;
	
	// v-1 edges
	for(int i=0;i<V-1;i++)
	{
		
		int u=selectmin(value,setMST);
		setMST[u]=true;
		
		for(int j=0;j<V;j++)
		{
			
			if(graph[u][j]!=0&&setMST[j]==false&&graph[u][j]<value[j])
			{
				value[j]=graph[u][j];
				parent[j]=u;
			}
		}
	}
	
//	cout<<parent[0]<<" "<<graph[0]
    int mst=0;
	for(int i=1;i<V;i++)
	{
	mst+=graph[parent[i]][i];
	cout<<parent[i]<<" "<<graph[parent[i]][i];
	cout<<endl;
}

cout<<mst;
}

int main()
{
	
	int graph[V][V]={
	{0,4,6,0,0,0},
	{4,0,6,3,4,0},
	{6,6,0,1,8,0},
	{0,3,1,0,2,3},
	{0,4,8,2,0,7},
	{0,0,0,3,7,0}};
	
	
	findmst(graph);
	
}
