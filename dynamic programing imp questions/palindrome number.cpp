// palindrome number

#include<bits/stdc++.h>
using namespace std;

bool check(int n){
	
	int rev=0;
	int temp=n;
	while(n!=0)
	{
	rev=10*rev+(n%10);
	n=n/10;
		
	}
	if(rev==temp)
	return true;
	
	return false;
}

int main()
{
	
	cout<<check(121);
	
	cout<<endl;
	
	cout<<check(1011);
	
}
