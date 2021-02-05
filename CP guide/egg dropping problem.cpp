// egg droping problem
#include<bits/stdc++.h>
using namespace std;


int min_attempts(int floor,int eggs)
{
	if(floor==0||floor==1)
	{
		return floor;
	}
	
	if(eggs==1)
	{
		return floor;
	}
	
	int mn=INT_MAX;
	
	for(int k=1;k<=floor;k++)
	{
		int temp=max(min_attempts(k-1,eggs-1),min_attempts(floor-k,eggs))+1;
		mn=min(mn,temp);
	}
	return mn;
}

int main()
{
	
	cout<<min_attempts(5,2);
	
}
