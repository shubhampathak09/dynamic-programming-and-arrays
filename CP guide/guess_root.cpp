// guess the nearest sq root

#include<bits/stdc++.h>
using namespace std;

int guessroot(int n)
{
	int low=1;
	int high=n;
	
	while(low<high)
	{
		
		int mid=(low+high)/2;
		
	if(mid*mid<=n)
	{
		low=mid+1;
		}	
	 else
	 high=mid;
	}
	return low;
}

int main()
{
	
	cout<<guessroot(10);
}
