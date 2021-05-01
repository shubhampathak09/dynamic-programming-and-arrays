// possible ways to construct building

#include<bits/stdc++.h>
using namespace std;

int count(int n)
{
	
	int dp1[n+1]; // ways to place building so no 2 spaces are together and end in building
	int dp2[n+1]; // ways to place build so no 2 space together and end in space
	
	
	dp1[0]=0;
	dp2[0]=0;
	
	
	dp1[1]=1;
	dp2[1]=1;
	
	for(int i=2;i<=n;i++)
	{
		dp1[i]=dp1[i-1]+dp2[i-1];
		dp2[i]=dp1[i-1];
		}
	return dp1[n]+dp2[n];		
}



int main()
{


int n=3;

	
int ans=count(3);

cout<<ans;


cout<<endl;

// for two rows ans would be ans*ans

cout<<ans*ans;	
}
