// largest size of +

#include<bits/stdc++.h>
using namespace std;

int  solve(vector<vector<int>>mat)
{
	
	int n=mat.size();  //.  row
	
	//cout<<n;
	
	//int m=mat[0].size(); // col
	
	int dp[n][n];
	int top[n][n];
	int left[n][n];
	int bot[n][n];
	int right[n][n];
	
	 // initialisze left right and bot;
	
	for(int i=0;i<n;i++)
	{
	//	cout<<"here";
	 left[i][0]=mat[i][0];
	 top[0][i]=mat[0][i];
	 bot[n-1][i]=mat[n-1][0];
	// cout<<bot[n-1][i];
	 right[i][n-1]=mat[n-1][0];
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=1;j<n;j++)
		{
			// filling left and top
			//cout<<"here";
			if(mat[i][j]==1)
			{
				left[i][j]=1+left[i][j-1];
			}
			else
			left[i][j]=0;
			
			if(mat[j][i]==1)
			top[j][i]=1+top[j-1][i];
			else
			top[j][i]=0;
			
			// reset j for bot and right
			j=n-1-j;
			if(mat[i][j]==1)
			{
				right[i][j]=1+right[i][j+1];  // carefull here
			}
			else
			right[i][j]=0;
			
			if(mat[j][i]==1)
			bot[j][i]=1+bot[j+1][i];
			else
			bot[j][i]=0;
			
			j=n-1-j; // rember to reset other wise infinite loop :p
			
		}
	}
	
//	for(int i=0;i<n;i++)
//	{
//		for(int j=0;j<n;j++)
//		{
//			cout<<left[i][j]<<" "<<top[i][j]<<" "<<right[i][j]<<" "<<bot[i][j];
//		}
//		cout<<endl;
//	}
	
	int len=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			
			int val=min(top[i][j],min(left[i][j],min(right[i][j],bot[i][j])));
			if(val>len)
			{
				len=val;
			}
		}
	}
	
	return len;
	
	//return 0;
}

int main()
{
 
 vector<vector<int>>mat={ 
        { 1, 0, 1, 1, 1, 1, 0, 1, 1, 1 }, 
        { 1, 0, 1, 0, 1, 1, 1, 0, 1, 1 }, 
        { 1, 1, 1, 0, 1, 1, 0, 1, 0, 1 }, 
        { 0, 0, 0, 0, 1, 0, 0, 1, 0, 0 }, 
        { 1, 1, 1, 0, 1, 1, 1, 1, 1, 1 }, 
        { 1, 1, 1, 1, 1, 1, 1, 1, 1, 0 }, 
        { 1, 0, 0, 0, 1, 0, 0, 1, 0, 1 }, 
        { 1, 0, 1, 1, 1, 1, 0, 0, 1, 1 }, 
        { 1, 1, 0, 0, 1, 0, 1, 0, 0, 1 }, 
        { 1, 0, 1, 1, 1, 1, 0, 1, 0, 0 } 
    }; 
	
	
	int ans=solve(mat);
	
	cout<<"Largest size of + formed is.."<<4*(ans-1)+1;
	
	cout<<endl;
	
	
}
