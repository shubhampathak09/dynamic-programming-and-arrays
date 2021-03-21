// kadanes algo

#include<bits/stdc++.h>
using namespace std;


int main()
{
	
//	int a[]={-1,2,3,4,6,-7,1,2,8,-9,10};
	int a1[]={-2,-3,4,-1,-2,1,5,-3};
	int n=sizeof(a1)/sizeof(a1[0]);
//	int n=sizeof(a)/sizeof(a[0]);
	
	
	int csum=a1[0];
	int ovsum=a1[0];
	
	for(int i=1;i<n;i++)
	{
		if(csum>=0)
		{
			csum+=a1[i];
		}
		else
		{
			csum=a1[i];
		}
		
		if(csum>ovsum)
		ovsum=csum;
	}
	
	cout<<ovsum;
	
	//cools
}
