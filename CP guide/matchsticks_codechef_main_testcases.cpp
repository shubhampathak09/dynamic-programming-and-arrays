// codechef matchstiocks
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
	
	
	vector<vector<int>>sparse_table_min(log_table.back()+1,vector<int>(a.size()));
	vector<vector<int>>sparse_table_max(log_table.back()+1,vector<int>(a.size()));
	
	sparse_table_min[0]=a;
	sparse_table_max[0]=a;
	
	for(int i=1;i<sparse_table_min.size();i++)
	{
		for(int j=0;j+(1<<i)<=a.size();j++)
		{
			sparse_table_min[i][j]=min(sparse_table_min[i-1][j],sparse_table_min[i-1][j+(1<<i)/2]);
			sparse_table_max[i][j]=max(sparse_table_max[i-1][j],sparse_table_max[i-1][j+(1<<i)/2]);
		}
	}
	
	
	
	int q;
	
	cin>>q;
	
	while(q--)
	{
		
		int l,r;
		
		cin>>l>>r;
		
		int log=log_table[r-l+1];
	    int minimum=min(sparse_table_min[log][l],sparse_table_min[log][r-(1<<log)+1]);
		int maximum=max(sparse_table_max[log][l],sparse_table_min[log][r-(1<<log)+1]);
		
		cout<<minimum<<" "<<maximum<<endl;
		
		float ans1=minimum+float (maximum-minimum)/2;
		
		
		// 0 to l-1
		// find max
		int log1=log_table[l];
		float ans2=max(sparse_table_max[log1][0],sparse_table_max[log1][l-1+(1<<log1)+1]);
	    //cout<<minimum<<" "<<ans2;
		//cout<<endl;	
		// l+1 to n-1
		
	//	cout<<ans2;
		
		int log2=log_table[n-l];
		float ans3=minimum+max(sparse_table_max[log2][l+1],sparse_table_max[log2][n-1-(1<<log2)+1]);
		
		int result=max(max(ans2,ans3),ans1);
		
		cout<<result;	
	}
}

int main()
{
	
	
	solve();
	
	// need to check 
	// some logical errors happening here
	// maybe do it aagain more clearly
}
