// tower of hanoi

#include<bits/stdc++.h>
using namespace std;

void solve(int n,int source,int helper,int destination)
{
	
	if(n==1)
	{
		cout<<"Moving plates from "<<n<<" "<<destination<<endl;
		return;
	}
	solve(n-1,source,destination,helper);
	cout<<"Moving plates from "<<n<<" "<<destination<<endl;
	solve(n-1,helper,source,destination);
}

int main()
{
	
int n=3;

solve(n,1,2,3);	
}
