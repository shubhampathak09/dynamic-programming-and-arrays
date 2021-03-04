/*SUBMERGE - Submerging Islands
#scc

Vice City is built over a group of islands, with bridges connecting them.
 As anyone in Vice City knows, the biggest fear of vice-citiers is that some day the
  islands will submerge. The big problem with this is that once the islands submerge,
   some of the other islands could get disconnected. 
   You have been hired by the mayor of Vice city to tell him how many islands,
    when submerged, will disconnect parts of Vice City.
 You should know that initially all the islands of the city are connected.
 */
 
#include<bits/stdc++.h>
using namespace std;

vector<int>g[101];
int in[101];
int low[101];
bool visited[101];

int timer;

set<int>points;




void dfs(int src,int parent=-1)
{
	
	
	visited[src]=1;
	in[src]=timer;
	low[src]=timer;
	timer++;
	int child=0;
	for(auto x:g[src])
	{
		if(x==parent)
		continue;
		
		if(visited[x])
		{
			low[src]=min(low[src],in[x]);
		}
		else
		{
			dfs(x,src);
			low[src]=min(low[src],low[x]);
			if(low[x]>=in[src]&&parent!=-1)
			{
				points.insert(src);
			}
			child++;
		}
		
	}
	if(parent!=-1&&child>1)
	points.insert(src);
}

void find_articulation_points()
{
	
	int n,m;
	
	cin>>n>>m;
	
	for(int i=1;i<=m;i++)
	{
		int a,b;
		cin>>a>>b;
		g[a].push_back(b);
		g[b].push_back(a);
	}
	for(int i=1;i<=n;i++)
	visited[i]=0;
	
	for(int i=1;i<=n;i++)
	{
		if(visited[i]==0)
		{
			dfs(i);
		}
	}
}


int main()
{
	
	find_articulation_points();
	
	for(auto x:points)
	{
		cout<<"vertex.."<<x<<" "<<"will submerge";
		cout<<endl;
	}
	
	cout<<points.size();
}


