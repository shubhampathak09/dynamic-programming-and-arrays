#include<bits/stdc++.h>
using namespace std;

int sliding_window(int a[],int n,int k)
{
	
	
	int i=0,j=0;
	int sum=0;
	int mx=INT_MIN;
	while(j<n)
	{
	    sum+=a[j];	
		if(j-i+1<k)
		{
			
			j++;
		}
		else if(j-i+1==k)
		{
			
			mx=max(mx,sum);
			sum=sum-a[i];
			i++;
			j++;
		}
	}
	
	return mx;
}

int main()
{
	
	int a[]={1,4,2,10,23,3,1,0,20};
	
	int n=sizeof(a)/sizeof(a[0]);
	
	int k=4;
	
	cout<<sliding_window(a,n,k);
	
}
