// MOs algorithm kniave approach

// sum in a particular range

#include<bits/stdc++.h>
using namespace std;


struct query
{
	int l,r;
};

int main()
{
	int a[] = {1, 1, 2, 1, 3, 4, 5, 2, 8};
	
	int n=sizeof(a)/sizeof(a[0]);
	
	query q[]={{0,4},{1,3},{2,4}};
	
	int m=sizeof(q)/sizeof(q[0]);
	
	//cout<<m;
	
	//cout<<q[0].r;


    for(int i=0;i<m;i++)
	{
		int i1=q[i].l;
		int i2=q[i].r;
		int sum=0;
		for(int j=i1;j<=i2;j++)
		{
		//	cout<<a[j];
			sum+=a[j];
		}
		cout<<sum<<" ";
		
		}	
}

