// ways of triangulation
#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	int n=6;
	int dp[n+1];
	
	for(int i=0;i<=n;i++)
	dp[i]=0;
	
	dp[0]=dp[1]=1;
	
    for(int i=2;i<=n;i++)
	{
		for(int j=0;j<i;j++)
		dp[i]+=dp[j]*dp[i-j-1];
		}	
	
	cout<<dp[n-2];
	
	
}

// to od
// dyke pattern
// diagonals never exceed

// march 8 2021
// march 31st 2021 dp master (500 problems)
// atcoder 26+karora 20 +faadcoder digit dp+spoj->>60
//Love babar list dp->40
// geeks for geeks easy ->50
// geeks for geeks 50 (medium+advance)
// tushar roy 50
// aditya verma ->50
// sumeet malik ->85
//total 385 problems
// leetcode 100 web page
//gaurav sen rachit dp interview random tough->50
//500s
