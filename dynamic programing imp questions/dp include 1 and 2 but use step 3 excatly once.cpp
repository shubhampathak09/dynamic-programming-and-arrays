#include<bits/stdc++.h>
using namespace std;



//dp[n]=dp[n-1]+dp[n-2]+dp[n-3]

//reach n-1th stair  from base eaxtly isinh 3 steps
//reache n-2th ste[ exac;ry using once
//n-3 reach w/o using 3 steps

//dp[i]=d[i-1]+dp[i-2]+notdp[i-3];
//notdp[i-3]=notdp[i-1]+notdp[i-2];

 
int solve(int n)
{
	
	int dpinclude[n+1];
	
	int dpnotinclude[n+1];
	
	dpinclude[1]=0;
	dpinclude[2]=0;
	dpinclude[3]=1;
	
	dpnotinclude[1]=1;
	dpnotinclude[2]=2;
	
	for(int i=3;i<=n;i++)
	dpnotinclude[i]=dpnotinclude[i-1]+dpnotinclude[i-2];
	
	
	for(int i=4;i<=n;i++)
	{
		dpinclude[i]=dpinclude[i-1]+dpinclude[i-2]+dpnotinclude[i-3];
	}
	
	return dpinclude[n];
}

int main()
{
	

int n=7;

int ans=solve(n);



cout<<ans;	
}
