#include<bits/stdc++.h>
using namespace std;


void addone(vector<int>&a,int n)
{
	
	a[n-1]=a[n-1]+1;
	int  carry=a[n-1]/10;
	a[n-1]=a[n-1]%10;
	
	
	for(int i=n-2;i>=0;i--)
	{
		
		if(carry==1)
		{
			a[i]=a[i]+1;
			carry=a[i]/10;
			a[i]=a[i]%10;
		}
	}
	if(carry==1)
	{
		a.insert(a.begin(),1);
	}
}

 
int main()

{
	
	vector<int>a={9,9,9,9};  //1 0 0 0
	
	int n=a.size();
	
	addone(a,n);
	
	for(int i=0;i<a.size();i++)
	{
		cout<<a[i]<<" ";
	}
	

}
