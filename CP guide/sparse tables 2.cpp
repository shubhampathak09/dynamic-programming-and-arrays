// sparse table 2
#include<bits/stdc++.h>
using namespace std;

int main()
{
	
vector<int>a={2,1,4,0,6,7,1,3,9};
// 
vector<int>log_table(a.size()+1,0);

for(int i=2;i<log_table.size();i++)
{
	log_table[i]=log_table[i/2]+1;
}

vector<vector<int>>sparse_table(log_table.back()+1,vector<int>(a.size()));

sparse_table[0]=a;

for(int i=1;i<sparse_table.size();i++)
{
	for(int j=0;j+(1<<i)<=a.size();j++)
	{
		
		sparse_table[i][j]=min(sparse_table[i-1][j],sparse_table[i-1][j+((1<<i))/2]);
	}
	
	}	


// sparse table constructed


bool something=1;
while(something)
{
	
	int l,r;
	cin>>l>>r;
	
	int log=log_table[r-l+1]; // o based indexing
	
   int ans=min(sparse_table[log][l],sparse_table[log][r-(1<<log)+1]);
   
   cout<<ans;
	
}

// My standard impemetation of sparse tables
// practice probelms
// SPOJ RMQSQ

	
}


