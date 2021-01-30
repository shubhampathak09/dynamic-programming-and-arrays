//534213678

//sort-> 123345678


#include<bits/stdc++.h>
using namespace std;

vector<int> _sort(vector<int>a,int n)
{
	
	if(n==0)
	{
		
		return vector<int>{};
		
	   	}
	
	
	vector<int> res=_sort(a,n-1);
	vector<int>result;
	int index=-1;
	for(int i=0;i<n-1;i++)
	{
		if(res[i]<a[n-1])
		{
	//	flag=true;
		result.push_back(res[i]);
	}
	else
	{
	index=i;
	result.push_back(a[n-1]);
	break;
	}
	}
	if(index!=-1)
	{
		for(int i=index;i<n-1;i++)
		result.push_back(res[i]);
	 } 
	 
	 return result;
}

int main()
{
	
	vector<int>a={5,1,3,4,1,0};
	
	int n=a.size();
	
	vector<int>result=_sort(a,n);
	
		
}
