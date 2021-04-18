//Input: arr[] = {1, 2, 3, 4}

#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	int a[]={1,2,3,4};
	
	int n=sizeof(a)/sizeof(a[0]);
	
	int ipos=0;
	int jpos=0;
	int maxxor=0;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if((a[i]^a[j])>maxxor)
			{
				ipos=i;
				jpos=j;
				maxxor=a[i]^a[j];
			}
		}
	}
	
	cout<<ipos<<" "<<jpos<<" "<<maxxor;
	
	cout<<endl;
	
	cout<<a[ipos]<<" "<<a[jpos];
}

