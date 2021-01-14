
// pascals triangle

#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	
	int n;
	
	cin>>n;
	
	vector<vector<int>>result;
	vector<int>first_row;
	
	first_row.push_back(1);
	
	result.push_back(first_row);
	
	
	for(int i=1;i<n;i++)
	{
		
		vector<int>prev_row=result[i-1];
		vector<int>curr_row;
		curr_row.push_back(1);
		for(int j=1;j<i;j++)
		{
			curr_row.push_back(prev_row[j]+prev_row[j-1]);
		
		}
			curr_row.push_back(1);
			
			
			
			result.push_back(curr_row);
		
	}
	
	for(auto x:result)
	{
		for(auto a:x)
		{
			cout<<a<<" ";
		}
		cout<<endl;
	}
}
