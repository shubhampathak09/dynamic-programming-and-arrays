// move all negetive elements to one side of array

#include<bits/stdc++.h>
using namespace std;

int main()
{
	
    vector<int>a={1,-3,4,5,1,-6,5,0,8};
    
    int n=a.size();
    
    vector<int>temp=a;
    
	int index=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]>=0)
	{
	
		temp[index]=a[i];
		index++;
	}
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]<0)
		{
		
		temp[index]=a[i];
		index++;
	}
	}
	
	for(auto x:temp)
	{
		cout<<x<<" ";
	}
}
