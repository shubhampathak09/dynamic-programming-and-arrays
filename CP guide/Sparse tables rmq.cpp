// rmq using sparse tables

#include<bits/stdc++.h>
using namespace std;


int main()
{                 //[0,8)
	
	vector<int>v={5,2,4,7,6,3,1,2};
	
    vector<int>log_table(v.size()+1,0);
    
    for(int i=2;i<log_table.size();i++)
    {
    	log_table[i]=log_table[i/2]+1;
	}
	
	
	vector<vector<int>>sparse_table(log_table.back()+1,vector<int>(v.size()));
	sparse_table[0]=v;
	for(int row=1;row<sparse_table.size();row++)
	{
		for(int i=0;i+(1<<row)<=v.size();i++)
		{
		sparse_table[row][i]=min(sparse_table[row-1][i],sparse_table[row-1][i+((1<<row))/2]);	
		}
	}
	
	while(1)
	{
		int l, r;
		
		cin>>l>>r;
		
		int log=log_table[r-l];
		
		int minimum=min(sparse_table[log][l],sparse_table[log][r-(1<<log)]);
		
		cout<<minimum;
	}
//	[l,r)
	
	// infinite loop only for test purpose
	
}
