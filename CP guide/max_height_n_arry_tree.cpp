#include<bits/stdc++.h>
using namespace std;

vector<int>g[1000];

int build_tree(int a[],int n)
{
	int root_index=0;
	
	for(int i=0;i<n;i++)
	{
		if(a[i]==-1)
		root_index=i;
		else
		{
			g[i].push_back(a[i]);
			g[a[i]].push_back(i);
		}
	}
	
	return root_index;
}

 

int main()
{
	
int parent[]={-1,0,1,2,3};

int n=sizeof(parent)/sizeof(parent[0]);

int root_indx=build_tree(parent,n);	

//cout<<root_indx;

	map<int,int>mp;
	
	queue<pair<int,int>>q;
	
	//int root_index
	
	q.push({root_indx,1});
	int max_height=INT_MIN;
	while(!q.empty())
	{
		
		auto x=q.front();
		q.pop();
		mp[x.first]=1;
		max_height=max(max_height,x.second);
		
		for(int i=0;i<g[x.first].size();i++)
		{
			if(!mp[g[x.first][i]])
			{
				q.push({g[x.first][i],x.second+1});
			}
		}
	}
	
	cout<<max_height;
	
}


