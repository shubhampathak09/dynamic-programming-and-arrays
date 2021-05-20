// triple sum

#include<bits/stdc++.h>
using namespace std;


int main()
{
	
	
	vector<vector<int>>result;
	
	int a[]={1,2,3,4,5,6,7,8,9,15};
	
	int targsum=18;
	
	int n=sizeof(a)/sizeof(a[0]);
	
	for(int i=0;i<=n-3;i++)
	{
		int fi=i+1;
		int sec=n-1;
		
		while(fi<sec)
		{
			int currsum=a[i];
			currsum+=a[fi];
			currsum+=a[sec];
			
			if(currsum==targsum)
			{
				result.push_back({a[i],a[fi],a[sec]});
				fi++;
				sec--;
			}
			else if(currsum>targsum)
			{
				sec=sec-1;
			}
			else
			{
				fi=fi+1;
			}
		}
	}
	
	
	for(int i=0;i<result.size();i++)
	{
		for(int j=0;j<result[i].size();j++)
		{
			cout<<result[i][j]<<" ";
		}
		cout<<endl;
	}
}
