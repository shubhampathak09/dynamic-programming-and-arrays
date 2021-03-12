// mst

// just writting the algo not douing any test, there already a code that  i worte before so..
#include<bits/stdc++.h>
using namespace std;


void printmst(int graph[])
{
	
	int v=5;
	
	for(int i=0;i<v-1;i++)
	{
	
	int u=selectmin(value,setMST);
	setmst[u]=true;
	for(int j=0;j<V;j++)
	{
		if(setmst[j]==false&&graph[u][j]<value[j])
		{
			value[j]=graph[u][j];
			parent[j]=u;;
		}
	}
	}
	
	
	for(int i=0;i<V;i++)
	{
		cout<<parent[i]<<g[parent[i]][i];
		sum+=g[parent[i]][i]// cool this will give us mst weight
	}
}

int main()
{
	
	
	//cool
}
