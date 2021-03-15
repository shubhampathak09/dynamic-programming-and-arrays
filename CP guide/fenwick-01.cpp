#include<bits/stdc++.h>
using namespace std;

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

int main(){
	
	int a[]={1,2,3,4,5};
	
	int n=sizeof(a)/sizeof(a[0]);
	
	
	for(int i=1;i<=n;i++)
	{
		update(i,a[i-1]);
		
	}
	
	cout<<sum(n);
}

