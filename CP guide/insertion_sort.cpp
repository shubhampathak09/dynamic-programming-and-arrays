// insertion sort

#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int a[],int n)
{
	
 int i,j,key;
 
 for(int i=1;i<n;i++)  //2 3 3  7
 {
 	key=a[i];
 	j=i-1;
 	while(j>=0&&a[j]>key)
 	{
 		// move ahead
 		a[j+1]=a[j];
 		j--; 
	 }
	 a[j+1]=key;
 }
	
}

int main()
{
	
	int a[]={3,2,3,7};
	
	int n=sizeof(a)/sizeof(a[0]);
	
	insertion_sort(a,n);
	
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	
}
