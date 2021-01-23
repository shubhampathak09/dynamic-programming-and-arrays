// kandanses algorithm

// 3 4 5 1 3 -7 6 4 5

#include<bits/stdc++.h>
using namespace std;

int kandanes_algo(int a[],int n)
{
	
	int overall_best=a[0];
	
	int current_best=a[0];
	
	for(int i=1;i<n-1;i++)
	{
		
		if(current_best>=0)
		{
			current_best=current_best+a[i];
		}
		else
		{
			current_best=a[i];  // critical step
		}
		
		if(overall_best<current_best)
		overall_best=current_best;
	}
	
	return overall_best;
}

int main()
{
	
	int a[]={-2,-3,4,-1,-2,1,5,3};
	
	int n=sizeof(a)/sizeof(a[0]);
	
	cout<<kandanes_algo(a,n);
}
