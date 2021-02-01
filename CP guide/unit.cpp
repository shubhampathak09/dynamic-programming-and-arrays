//bits

#include<bits/stdc++.h>
using namespace std;

int main()
{
	uint8_t a=00001000;
	//cout<<a;
	int count=0;
	while(a)
	{
		
		count+=a%2;
		a>>1;
	}
	cout<<count;
}
