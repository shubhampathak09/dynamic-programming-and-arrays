#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	
	vector<int>a={3,4,5,6,7};
	
	vector<int>b={7,9,13};
	
	int n=a.size();
	
	int m=a.size();
	int j,key,s;
	int k=n-1;
	for(s=0;s<m;s++)
	{
		
	//	int i=0;
		 j=k;
		 key=b[s];
		while(j>=0&&a[j]>key)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=key;
		k++;
	}
//	cout<<"fcf";
}
