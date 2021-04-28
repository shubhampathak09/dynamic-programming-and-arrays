// min taps to open

#include<bits/stdc++.h>
using namespace std;

int solve(int a[],int n)
{
	// 0 index array
 int min=0;
 int max=0;
 int open=0;
 
 while(max<n)
 {
 
 for(int i=0;i<n;i++)
 {
 	if(i-a[i]<=min&&i+a[i]>=max)
 	{
 		max=i+a[i];
	 }
	 
	 }	
	 
	 if(min==max)
	 return -1;
 	 open++;
	 min=max;  
	 }	
	
	return open;
}

int main()
{
	
	int a[]={2,1,1,2,1};
	
	int n=sizeof(a)/sizeof(a[0]);
	
	
	cout<<solve(a,n);
}
