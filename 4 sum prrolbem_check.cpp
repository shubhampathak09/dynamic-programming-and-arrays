 //4 sum problem
 
 #include<bits/stdc++.h>
 
 using namespace std;
 
 int dp[100][100][100];
 
 
 bool foursum(int a[],int n,int sum,int count)
 {
 	
 	if(sum==0&&count==4)
 	return true;
 	
 	if(count>4||n==0)
 	return false;
 	
 	if(dp[n][sum][count])
 	{
 		return dp[n][sum][count];
	 }
 	
 	// recursion
 	return dp[n][sum][count]=foursum(a,n-1,sum-a[n-1],count+1)||foursum(a,n-1,sum,count);
 	
 }
 
 int main()
 {
 	
 	int a[]={2,7,4,0,9,5,1,3};
 	
 	int n=sizeof(a)/sizeof(a[0]);
 	
 	int sum=20;
 	
 	memset(dp,0,sizeof(dp));
 	
 	cout<<foursum(a,n,sum,0);
 }
