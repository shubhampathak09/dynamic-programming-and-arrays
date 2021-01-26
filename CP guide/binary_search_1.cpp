// first elemet greater 20

#include<bits/stdc++.h>
using namespace std;

bool property(int n)
{
	return n>20;  // searching for first element greater than 2p0
}

int searchfirstlement(int x)
{
	int low=1;
	int high=x;
	//int mid=(low+high)/2;
	
	while(low<high)
	{
		int mid=(low+high)/2;
		if(property(mid))
		{
			high=mid;
		}
		else
		{
			low=mid+1;
		}
	}
	return low;
}

int main()
{
	
cout<<searchfirstlement(25);
}
