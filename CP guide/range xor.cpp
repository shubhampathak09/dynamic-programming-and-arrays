// range xor 
#include<bits/stdc++.h>
using namespace std;


vector<int>a(10001);
vector<int>seg(4*10001);

void build(int si,int left,int right)
{

if(left==right)
{
	seg[si]=a[left];
	return;
	
	}	
int mid=(left+right)/2;
	
build(2*si+1,left,mid);
build(2*si+2,mid+1,right);
seg[si]=seg[2*si+1]^seg[2*si+2];
	
}

int query(int si,int rl,int rr,int left,int right)
{
	
	if(left>=rl&&right<=rr)
	return seg[si];
	
	if(right<rl||left>rr)
	return 0;
	
	int mid=(left+right)/2;
	return query(2*si+1,rl,rr,left,mid)^query(2*si+2,rl,rr,mid+1,right);
	
}

int main()
{
	
	a={4,5,6,7,8};
	
	int n=5;
	
	build(0,0,n-1);
	
	cout<<query(0,0,4,0,n-1);
}
