// segment trees
#include<bits/stdc++.h>
using namespace std;

int a[10001];
int seg[4*10001];

void build(int index,int low,int high)
{
	if(low==high)
	{
		seg[index]=a[low];
		return;
	}
	int mid=(low+high)/2;
	build(2*index+1,low,mid);
	build(2*index+2,mid+1,high);
	seg[index]=seg[2*index+1]+seg[2*index+2];
}

int query(int index,int l,int r,int low,int high)
{
	
	if(low>=l&&high<=r)
	return seg[index];
	
	if(low>r||high<l)
	return 0;
	
	int mid=(low+high)/2;
	int leftsum=query(2*index+1,l,r,low,mid);
	int rightsum=query(2*index+2,l,r,mid+1,high);
	return leftsum+rightsum;
}

int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>a[i];
	// n=6
	build(0,0,n-1);
	//1 3 5 7 9 11
	
	//for(int i=0;i<4;i++)
	//cout<<seg[i]<<endl;
	
	cout<<query(0,1,3,0,n-1);
}
