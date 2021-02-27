// SPOJ 
// RMQSQ
//Input:
/*
3
1 4 1
2
1 1
1 2
*/
//
/*
no tags 
You are given a list of N numbers and Q queries. Each query is specified by two numbers 
i and j; the answer to each query is the minimum number between the range [i, j] (inclusive).

Note: the query ranges are specified using 0-based indexing.
*/

#include<bits/stdc++.h>
using namespace std;

void solve()
{
	
	int n;
	
	cin>>n;
	
	vector<int>a(n);
	
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	vector<int>log_table(a.size()+1,0);
	
	for(int i=2;i<log_table.size();i++)
	{
		log_table[i]=log_table[i/2]+1;
	}
	
	
	
	vector<vector<int>>sparse_table(log_table.size()+1,vector<int>(a.size()));
	
	sparse_table[0]=a;
	
	
	for(int i=1;i<sparse_table.size();i++)
	{
		for(int j=0;j+(1<<i)<=a.size();j++)
		{
			
			sparse_table[i][j]=min(sparse_table[i-1][j],sparse_table[i-1][j+(1<<i)/2]);
		}
	
	}
	int q;
	
	cin>>q;
	
	while(q--)
	{
		int l,r;
		
	
		
		cin>>l>>r;
		
		 // o based indexing
		int log=log_table[r-l+1];  // because l and r are inclusive
		    
		cout<<min(sparse_table[log][l],sparse_table[log][r-(1<<log)+1]); 
		cout<<endl;   
	}
}
int main()
{
	
	// inputs
	
	solve();
	
}
