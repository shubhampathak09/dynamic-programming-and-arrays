// 

#include<bits/stdc++.h>
using namespace std;




int main()
{


//int n=4;


int mat[4][4]={{0,10,15,20},{10,0,35,25},{15,35,0,30},{20,25,30,0}};	


vector<int>a={2,3,4};

int cost_far=INT_MAX;
int src=1;
int n=a.size();
do
{
int cost=0;
int first=a[0];
int last=a[n-1];

for(int i=0;i<n-1;i++)
	{
		
		cost+=mat[a[i]-1][a[i+1]-1];
	}
	
	cost+=mat[src-1][first-1]+mat[last-1][src-1];
	
	if(cost<cost_far)
	{
		cost_far=cost;
	}
	
	}
	while(next_permutation(a.begin(),a.end()));	
	
	
	cout<<"Best way to start from src = 1 and return back to src with min possible cost is.."<<cost_far;
}


// complexity o(n!)
