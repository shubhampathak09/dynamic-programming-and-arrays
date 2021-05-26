// pass by value test after 2017--shanthi V

#include<bits/stdc++.h>
using namespace std;


void swap(int &a,int &b)
{
	int temp=a;
	
	a=b;
	b=temp;
	
	return;
}

int main()
{
	
	int a=4;
	int b=5;
	
	cout<<a<<b<<endl;
	
	swap(a,b);
	
	cout<<a<<b;
	
	
}
