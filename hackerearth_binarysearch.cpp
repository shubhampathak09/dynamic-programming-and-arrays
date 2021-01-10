#include<bits/stdc++.h>
using namespace std;


int findfirst(vector<int>inp,int n,int target)
{
	
	if(n==0)
	return -1;
	
	int left=0,right=n-1;
	
	while(left<right)
	{
		int mid=left+(right-left)/2;
		
		if(inp[mid]<target)
		{
			left=mid+1;
		}
		else
		{
			right=mid;
		}
	}
	return left;
}

int main()
{
	
	int n;
	cin>>n;
	
	vector<int>input;
	
	for(int i=0;i<n;i++)
	{
		int a;
		cin>>a;
		input.push_back(a); 
	}
	
//	for(int i=0;i<n;i++)
//	{
//		cout<<input[i]<<" ";
//	}
	
	sort(input.begin(),input.end());
	
	vector<int>prefix(n,0);
	
	prefix[0]=input[0];
	
	
	
	for(int i=1;i<n;i++)
	{
		prefix[i]=prefix[i-1]+input[i];
	}
	
//	for(auto x:prefix)
//	{
//		cout<<x<<" ";
//	}
	
	int q;
	
	cin>>q;
	
	while(q--)
	{
		
		int p;
		cin>>p;
		
		int x=findfirst(input,n,p);
		cout<<x+1<<" "<<prefix[x]<<" "; // because x is o based index return number of sodier slain will be x+1
		cout<<endl;
	}
}
