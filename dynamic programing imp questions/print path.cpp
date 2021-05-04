// print all paths 
#include<bits/stdc++.h>
using namespace std;


vector<int>g[101];
vector<int>visited(101);

int cnt;

void printpath(vector<int>path)
{
	for(auto x:path)
	{
		cout<<x<<" ";
	}
	cout<<endl;
}

void haspath(int src,int dst,vector<int>path)
{
	visited[src]=1;
	path.push_back(src);
	
	if(src==dst)
	{   
	    cnt++;
		printpath(path);
		return;
	}
	for(auto x:g[src])
	{
		if(visited[x]==false)
		{
			haspath(x,dst,path);
			visited[x]=0;
		//	path.pop_back();
		}
		
	}
	
}

int main()
{
	int n=7;
	int m=8;
	
	g[0].push_back(1);
	g[1].push_back(0);
	
	g[1].push_back(2);
	g[2].push_back(3);
	
	g[0].push_back(3);
	g[3].push_back(0);
	
	g[3].push_back(4);
	g[4].push_back(3);
	
	g[4].push_back(5);
	g[5].push_back(4);
	
	g[5].push_back(6);
	g[6].push_back(5);
	
	g[4].push_back(6);
	g[6].push_back(4);
	
	vector<int>path;
	
	//int src=
	
	int src=0;
	int dst=6;
	
	for(int i=0;i<n;i++)
	visited[i]=0;
	
	haspath(src,dst,path);
	
	
	
	cout<<"Number of paths are:"<<cnt;
	
	// gg
}

