// Terahedron and the ant

#include<bits/stdc++.h>
using namespace std;
//
//void solve()
//{
//	
//	vector<int>vertices={0,1,2,3};
//	
//	int steps=2;
//	// 0 -> a  1->b 2->c 3-> 4
//	
//	int dp[vertices.size()][steps+1];
//	
//	for(int i=0;i<vertices.size();i++)
//	{
//		dp[i][0]=0;
//	}
//	int current=3;
//	dp[current][0]=1;
//	
//	for(int i=0;i<vertices.size();i++)
//	{
//		for(int j=1;j<=steps;j++)
//		{
//		//	 
//		int s=0;
//		for(int m=0;m<vertices.size();m++)
//		{
//			if(m!=i)
//			s+=dp[m][j-1];
//		}
//		dp[i][j]=s;	
//		}
//		}
//		
//		int ans=dp[current][steps];
//		
//		cout<<ans;
//	}
//	



void solve()
{
	
	int n=4;  // 0 1 2 3 ;
	
	int steps=3;
	int dp[n][steps+1];
	
	int curr=3;
	
	for(int i=0;i<n;i++)
	{
		dp[i][0]=0;
	}
	dp[3][0]=1; // as this is the starting vertex
	
	for(int i=1;i<=steps;i++)
	{
	 int sum=dp[i-1][0]+dp[i-1][1]+dp[i-1][2]+dp[i-1][3];
	 
	 for(int j=0;j<n;j++)
	 {
	 	dp[i][j]=sum-dp[i-1][j];
		 }
		 
		 
		
	}
	 cout<<dp[3][4];	
}

int main()
{
	
	solve();
	
}

// thoda thande di.. s..ka...
