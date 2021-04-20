// check if kth bit is set

#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	
	int n=2;
	
	for(int i=0;i<2;i++)
	{
		int b=(1<<i)&n;
		if(b)
		cout<<(i+1)<<" set"<<endl;
		else
		cout<<(i+1)<<" unset"<<endl;
	}
	
}
