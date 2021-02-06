// kadanes algo

#include<bits/stdc++.h>
using namespace std;

int kadanes(int a[],int n)
{
	
	int curr_bst=a[0];
	
	int overall_bst=a[0];
	
	for(int i=1;i<n;i++)
	{
		
		if(curr_bst>=0)
		{
			curr_bst=curr_bst+a[i];
		}
		else
		{
			curr_bst=a[i];
		}
		
		if(curr_bst>overall_bst)
		{
			overall_bst=curr_bst;
		}
	}
	
	return overall_bst;
}

int main()
{
	
	int a[]={-7,4,3,-1,-3};
	
	int n=sizeof(a)/sizeof(a[0]);
	
	
	cout<<kadanes(a,n);
}
