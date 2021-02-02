// reverse an array

#include<bits/stdc++.h>
using namespace std;

//1 2 3 4 5
//0 1 2 3 4
//0 1 2 3
void reversearray(int a[],int n)
{
	int mid=n/2;
	for(int i=0;i<mid;i++)
	{
	swap(a[i],a[n-i-1]);	
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}

int main()
{
	
	int a[]={3,4,1,5,6,7,8};
	
	
	int n=sizeof(a)/sizeof(a[0]);
	
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	cout<<"After reverse.."<<endl;
	reversearray(a,n);
	
 
}
