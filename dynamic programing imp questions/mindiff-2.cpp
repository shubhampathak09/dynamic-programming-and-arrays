// min diff-2

#include<bits/stdc++.h>
using namespace std;


int abs(int x,int y)
{
	if(x>y)
	return x-y;
	else
	return y-x;
}

int main()
{
	
	
	vector<int>a={1,3,5,11,2};
	vector<int>b={23,127,235,19,8};
	
	
	int n=a.size();
	
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());
	
	
	int ia=0;
	int ib=0;
	
	int res=INT_MAX;
	
	int x=-1;
	int y=-1;
	
	while(ia<n&&ib<n)
	{
		
		if(abs(a[ia],b[ib])<res)
		{
		
		res=abs(a[ia],b[ib]);
		x=ia;
		y=ib;
	}
		
		if(a[ia]<b[ib])
		ia=ia+1;
		else
		ib=ib+1;
	}
	
	cout<<res;
	cout<<endl;
	cout<<a[x]<<" "<<b[y];
	
	
	//o(n) +o(n(log(n))
	
}
