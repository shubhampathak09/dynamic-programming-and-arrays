
// algorithm to checjek dulicates in array in o(n) &o(1)

#include<bits/stdc++.h>
using namespace std;


int main()
{
	
	int a[]={1,2,1,3,4,3,2,5,4,6,5,9,0};
	
	int n=sizeof(a)/sizeof(a[0]);
	
	for(int i=0;i<n;i++)
	{
		if(a[abs(a[i])]>=0)
		a[abs(a[i])]=-a[abs(a[i])];
		else
		cout<<abs(a[i])<<endl;
	}
	
	
}




