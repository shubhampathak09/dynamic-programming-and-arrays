#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	
	int a[]={5,10,10,100,5,6};
	
//	int dp1[n];
//	int dp2[n];
	
	//dp1[0]=a[0];
	//dp2[0]=0;
	
	int inc=a[0];
	int exc=0;
	
	int n=sizeof(a)/sizeof(a[0]);
	
	for(int i=1;i<n;i++)
	{
		
	int currinc=a[i]+exc;  //dp1[i]	
	 int currexc=max(exc,inc);  //dp2[i]
	 
	 inc=currinc;
	 exc=currexc;
	}
	
	cout<<inc<<" "<<exc;   // max(dp1[n-1],dp2[n-1])
	
	cout<<endl;
	
	cout<<max(inc,exc);
	
}
