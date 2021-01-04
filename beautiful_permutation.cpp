#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	int n;
	
	cin>>n;
	
	vector<int>v(n);
	
	for(int i=0;i<n;i++)
	{
		v[i]=i+1;
	}
	vector<vector<int>>permutation;
	do
	{
		vector<int>result;
		for(int i=0;i<n;i++)
		{
			result.push_back(v[i]);
		}
		permutation.push_back(result);
		//cout<<endl;
	}while(next_permutation(v.begin(),v.end()));
	
	int count=0;
	
	for(auto x:permutation)
{
	bool flag=true;
	for(int i=0;i<n;i++)
	{
	//	cout<<a<<" ";
	    if(x[i]%(i+1)!=0&&(i+1)%x[i]!=0)
	      {
	      	flag=false;
		  }
	}
	if(flag==true)
	{
		count++;
	}
//	cout<<endl;
}
cout<<count;
	
}


