#include<bits/stdc++.h>
using namespace std;

void merge(int a1[],int n1,int a2[],int n2,int a3[])
{
	
	int i=0,j=0,k=0;
	
	while(i<n1&&j<n2)
	{
		if(a1[i]<a2[j])
		{
			a3[k]=a1[i];
			i++;
			k++;
			
		}
		
		else
		{
			a3[k]=a2[j];
			j++;
			k++;
		}
	}
	
	while(i<n1)
	{
		a3[k]=a1[i];
		k++;
		i++;
	}
	while(j<n2)
	{
		a3[k]=a2[j];
		k++;
		j++;
	}
	
	for(int m=0;m<n1+n2;m++)
	{
		cout<<a3[m]<<" ";
	}
}

int main()
{

int a1[]={1,3,5,7};
int n1=sizeof(a1)/sizeof(a1[0]);

int a2[]={2,4,6,8};
int n2=sizeof(a2)/sizeof(a2[0]);

int a3[n1+n2];	

merge(a1,n1,a2,n2,a3);
	
}
