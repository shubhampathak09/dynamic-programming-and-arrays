// fenwick trees
#include<bits/stdc++.h>
using namespace std;

//const int N = 1e5+10;
//
//int bits[N];
//
//void update(int i,int x,int n)
//{
//	
//for(;i<=n;i+=(i&(-i)))
//{
//	bits[i]+=x;
//	}	
//}
//
//
//int sum(int i)
//{
//	int ans=0;
//	
//	for(;i>0;i-=(i&-i))
//	{
//		ans+=bits[i];
//	}
//	return ans;
//}
//
//int main()
//{
//	
//	int a[]={
//	};
//	
//	int n=sizeof(a)/sizeof(a[0]);
//	
//	for(int i=1;i<=n;i++)
//	update(i,a[i],n);
//	
//	//cout<<"here";
//	
//	int ans=sum(6)-sum(2);   // sum between 3 and 6 range
//	
//	
//	cout<<ans;
//}



const int N = 1e5+10;
int bit[N];

void update(int i, int x){
	for(; i < N; i += (i&-i))
		bit[i] += x;
}

int sum(int i){
	int ans = 0;
	for(; i > 0; i -= (i&-i))
		ans += bit[i];
	return ans;
}

int main()
{
	
	int a[]={3,4,1,5,6,7};
	
	int n=sizeof(a)/sizeof(a[0]);
	
	for(int i=1;i<=n;i++)
	{
		update(i,a[i-1]);
	}
//	cout<<sum(3)-sum(1);
	
	
}
