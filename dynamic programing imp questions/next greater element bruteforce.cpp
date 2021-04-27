// test

#include<bits/stdc++.h>

using namespace std;


int main()
{
	
	int a[]={2,3,1,4,15,6,9,0};
	
	

	
	int n=sizeof(a)/sizeof(a[0]);
	
	vector<int>ans;
	
	for(int i=0;i<n;i++)
	{
		int next=-1;
		for(int j=i+1;j<n;j++)
		{
			
			if(a[j]>a[i])
			{
				next=a[j];
				break;
			}
		}
		
		ans.push_back(next);
	}
	
	for(int i=0;i<n;i++)
	{
		cout<<ans[i]<<" ";
	}
	
}


// so coool linear searcg interesting application

