// bitionic subseuence

#include<bits/stdc++.h>
using namespace std;


int solve(int a[],int n)
{
	
	int left[n],right[n];
	
	int o1=INT_MIN;
	int o2=INT_MIN;
	
	left[0]=1;
	right[n-1]=1;
	
	for(int i=1;i<n;i++)
	{
		int len=0;
		for(int j=0;j<i;j++)
		{
			if(a[i]>a[j])
			len=max(len,left[j]);
		}
		left[i]=1+len;
//		if(o1<left[i])
//		o1=left[i];
	}
	
	for(int i=0;i<n;i++)
	{
		cout<<left[i]<<" ";
	}
	
	for(int i=n-2;i>=0;i--)
	{
		int len=0;
		
		for(int j=n-1;j>i;j--)
		{
			
			
			if(a[i]>a[j])
			{
				len=max(len,right[j]);
			//	cout<<len<<" ";
			}
		}
		right[i]=1+len;
		//cout<<right[i]<<" ";
//		if(o2<right[i])
//		o2=right[i];
	}
	cout<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<right[i]<<" ";
	}
	cout<<endl;
	//cout<<o1+o2;
//	cout<<o1<<endl;
//	cout<<o2<<endl;   // this is ridiculosus

int ans=INT_MIN;
  for(int i=0;i<n;i++)
  {
  	
  	ans=max(ans,left[i]+right[i]);
   } 
	
	return ans-1;
	
}


int main()
{

int a[]={1,11,2,10,4,5,2,1};

int n=sizeof(a)/sizeof(a[0]);

cout<<solve(a,n);	
	
}
