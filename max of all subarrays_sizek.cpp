#include<bits/stdc++.h>
using namespace std;

void slide(int a[],int n,int k)
{
	
	int i=0,j=0;
	
	int mx_s=INT_MIN;
	int mx_f=INT_MIN;
	
	while(j<n)
	{
	//	cout<<"cdc";
	mx_s=max(a[j],mx_s);	
	
	if(j-i+1<k)
	{
		j++;
	}
	
	else if(j-i+1==k)
	{
		mx_f=max(mx_f,mx_s);
		
		mx_s=max(mx_s,a[i]);
		
		i++;
		j++;
		}
			
	}
	
	cout<<mx_f;
}

int main()
{
	
	int a[]={5,2,-1,0,3};
	
	int n=sizeof(a)/sizeof(a[0]);
	
	int k=2;
	
	slide(a,n,k);
}
