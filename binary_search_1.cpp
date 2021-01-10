#include<bits/stdc++.h>
using namespace std;

int calsummation(int n)
{
	int cnt=0;
	
	while(n)
	{
		cnt+=n/5;
		n=n/5;
	}
	
	return cnt;
}

int bsearch(int n)
{
	
	int low=1;
	int high=100;
	
	while(low<high)
	{
		int mid=(high+low)/2; 
	 
		int val=calsummation(mid);
		//cout<<mid<<" "<<val<<endl;
		//cout<<low<<" "<<high;
		if(val>n)
		{
			high=mid-1;
		}
		else
		{
			low=mid;
		}
	//	else
	//	break;
	}
	return low;
}

int main()
{
	
//	cout<<calsummation()
	int n;
	cin>>n;
	
	cout<<bsearch(n);
	
}
