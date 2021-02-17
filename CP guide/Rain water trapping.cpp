// Rain water trapping problem bruteforce

#include<bits/stdc++.h>
using namespace std;

int calmax(int i,int j,int a[])
{
	int nax=INT_MIN;
	for(int k=i;k<=j;k++)
	{
		nax=max(nax,a[k]);
	}
	return nax;
}



int main()
{
	
	
int a[]={3,0,2,0,4};

//cout<<calmax(0,1,a);

int n=sizeof(a)/sizeof(a[0]);

int ans=0;	
for(int i=0;i<n;i++)
{
	int leftmax=calmax(0,i,a);
	int rightmax=calmax(i,n-1,a);
	//cout<<leftmax<<rightmax;
	int result=min(leftmax,rightmax)-a[i];
	ans+=result;
	}
	
	
	cout<<ans;	
}


