#include<bits/stdc++.h>
using namespace std;

vector<int>subtree(1001);

vector<int>g[1001];

void findsubtree(int n,int parent)
{

    subtree[n]=1;  // entring the node 
	for(auto x:g[n])
	{
		if(x==parent)
		continue;
		
		findsubtree(x,n);
		
		subtree[n]+=subtree[x];
	}
    	//subtree[n]=1; 	// leaving the node
	
}

int main()
{
	
	// to be tested
	
	int n=7;
	int m=6;
	
	
//	subtree.resize(n+1);
	
//	g.resize(n+1);
	
//	for(int i=0;i<=n;i++)
//	{
//		g[i].resize(n+1);
//	}
	
	g[1].push_back(2);
	g[2].push_back(1);
	
	g[1].push_back(4);
	g[4].push_back(1);
	
	g[1].push_back(5);
	g[5].push_back(1);
	
	g[2].push_back(6);
	g[6].push_back(2);
	
	g[4].push_back(3);
	g[3].push_back(4);
	
	g[4].push_back(7);
	g[7].push_back(4);
	
	
	findsubtree(1,-1);
	
	for(int i=1;i<=7;i++)
	{
		cout<<subtree[i]<<endl;
	}
}
