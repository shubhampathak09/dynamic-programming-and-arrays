//kth symbol in grammar
#include<bits/stdc++.h>
using namespace std;

int ktsymbol(int n,int k)
{
	if(n==1&&k==1)
	return 0;
	
	int mid=pow(2,n-1)/2;
	
	if(k<=mid)
	return ktsymbol(n-1,k);
	else
	return !ktsymbol(n-1,k-mid);
}

int main()
{
//1	0
//2	01
//3	0110 

cout<<ktsymbol(3,3);
	
}
