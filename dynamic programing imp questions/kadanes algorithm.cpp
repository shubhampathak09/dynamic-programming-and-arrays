//Given a sequence of n real numbers A(1) … A(n), determine
// a contiguous subsequence A(i) … A(j) for which the sum of elements 
//in the subsequence is maximized.

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a[]={3, -4, 7, -9, 8, 7};
	
	int csum=a[0];
	int ovsum=a[0];
	
	int n=sizeof(a)/sizeof(a[0]);
	
	for(int i=1;i<n;i++)
	{
		
		if(csum>=0)
		{
			csum+=a[i];
		}
		else
		csum=a[i];
		
		if(ovsum<csum)
		{
			ovsum=csum;
		}
	}
    
	cout<<ovsum;	
}

