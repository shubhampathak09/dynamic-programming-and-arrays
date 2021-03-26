// 4 sum

#include<bits/stdc++.h>
using namespace std;

/*
Input: array = {10, 2, 3, 4, 5, 9, 7, 8} 
       X = 23 
Output: 3 5 7 8
*/
int main()
{
	
	int a[]={10,2,3,4,5,9,7,8};
	
	int n=sizeof(a)/sizeof(a[0]);
	
	int target=23;
	
	int total=(1<<n);
	
	for(int i=0;i<total;i++)
	{
			int s=0;
			set<int>st;
		if(__builtin_popcount(i)==4)
		{
		
			for(int j=0;j<n;j++)
			{
				int f=(1<<j);
				if(i&f)
				{
					s+=a[j];
					st.insert(a[j]);
				}
			}
			if(s==total)
			{
				for(auto x:st)
				{
					cout<<x<<" ";
				}
				break;
			}
		}
	}
	
}
