// fenwick trees
#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;

int bits[N];

void update(int i,int x,int n)
{
	
for(;i<=n;i+=(i&(-i)))
{
	bits[i]+=x;
	}	
}


int sum(int i)
{
	int ans=0;
	
	for(;i>0;i-=(i&-i))
	{
		ans+=bits[i];
	}
	return ans;
}

int main()
{
	
	int a[]={2,1,1,3,2,3,4,5,6,7,8,9};
	
	int n=sizeof(a)/sizeof(a[0]);
	
	for(int i=1;i<=n;i++)
	update(i,a[i],n);
	
	//cout<<"here";
	
	int ans=sum(6)-sum(2);   // sum between 3 and 6 range
	
	
	cout<<ans;
}
