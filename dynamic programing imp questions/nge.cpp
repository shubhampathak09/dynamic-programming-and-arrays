#include<bits/stdc++.h>
using namespace std;


int main()
{
	
	
	int a[]={13,7,6,12};
	
	int n=sizeof(a)/sizeof(a[0]);
	
	//vector<int>nge(n);
	int nge[n];
	int k=0;
	int count=0;
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[j]>a[i])
			{
				nge[k]=a[j];
				k++;
				break;
			}
			if(k==i)
			{
			
			nge[k]=-1;
			k++;
		}
		}
		
	}
	
	nge[k]=-1;
	
	for(int j=0;j<n;j++)
	{
		cout<<nge[j]<<" ";
	}
}


// fuck it al.so
