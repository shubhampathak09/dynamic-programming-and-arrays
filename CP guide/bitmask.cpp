// bit masks
// popcount
#include<bits/stdc++.h>
using namespace std;


int main()
{
	
	
	int a[]={1,2,3};
	
	int n=sizeof(a)/sizeof(a[0]);
	
	int total=(1<<n);
	
	for(int mask=0;mask<total;mask++)
	{
		
		for(int i=0;i<n;i++)
		{
			//cout<<__builtin_popcount(i);
		if(__builtin_popcount(mask)==2)
		{
		
			int f=(1<<i);
			if(mask&f)
			{
				cout<<a[i]<<" ";
			}
		}
	}
		cout<<endl;
	}
	

  // for(int i=1;i<=5;i++)
 //  {
   //	cout<<__builtin_popcount(i);
   //	cout<<endl;
  // }
	
//	cout<<__builtin_popcount(2);
}
