// ugly numbers
/*
Ugly numbers are numbers whose only prime factors are 2, 3 or 5. 
The sequence 1, 2, 3, 4, 5, 6, 8, 9, 10, 12, 15, … shows the first 11 ugly numbers. By convention, 1 is included.

Given a number n, the task is to find n’th Ugly number.
*/


#include<bits/stdc++.h>
using namespace std;


int getnextuglyno(int n)
{
	int i2=0,i3=0,i5=0;
	
	int ugly[n+1];
	
	ugly[0]=1;
	
	
	int n_2=2;
	int n_3=3;
	int n_5=5;
	
	for(int i=1;i<=n;i++)
	{
		ugly[i]=min(min(n_2,n_3),n_5);
		
		if(ugly[i]==n_2)
		{
			i2=i2+1;
			n_2=2*ugly[i2];
		}
		if(ugly[i]==n_3)
		{
			i3=i3+1;
			n_3=3*ugly[i3];
		}
		if(ugly[i]==n_5)
		{
			i5=i5+1;
			n_5=5*ugly[i5];
		}
	}
	
	return ugly[n-1];
}
//1 2 3 4 5  6 8
int main()
{
	cout<<getnextuglyno(7);
	
}

// follow up question super ugly numbers
