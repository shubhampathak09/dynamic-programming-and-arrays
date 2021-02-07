#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>a,int i)
{
	
	if(i==0)
	return a[i];
	
	if(i<0)
	return 0;
	
	return max(solve(a,i-2)+a[i],solve(a,i-1));
	
	
}

int main()
{
	
	vector<int>a={5,5,10,100,10,5};
	
	int n=a.size();
	
	cout<<n;
	cout<<endl;
	
	cout<<solve(a,n-1);
}
