////// count of all subarrays wih given sum
////
////#include<bits/stdc++.h>
////using namespace std;
////
////int main()
////{
////	
////	
////	int a[]={10,2,-2,-20,10};
////	
////	int n=sizeof(a)/sizeof(a[0]);
////	
////	
////	int csum=a[0];
////	int ovsum=a[0];
////	int ipos=0;
//////	vector<int>index;
////	for(int i=1;i<n;i++)
////	{
////		
////		if(csum>=0)
////		{
////			csum+=a[i];
////		}
////		else
////		{
////			csum=a[i];
////		}
////		
////		if(csum==0_
////		{
////			ovsum=csum;
////			ipos=i;
////		}
////	}
////	
////	cout<<ovsum;
////}
//
//
//10 2 -2 -20 10
//
//-10
//
//
//for(int i=0;i<n;i++)
//{
//	csum+=a[i];
//	
//	if(csum==gsum)
//	result++;
//	
//	if(mp.find(csum-gsum)!=mp.end)
//	result+=mp[csum-gsum];
//	
//	mp[csum]++;
//}


#include<bits/stdc++.h>
using namespace std;


int main()
{
	
	
	int a[]={10,2,-2,-20,10};
	
	int gsum=-10;
	
	int n=sizeof(a)/sizeof(a[0]);
	
	int csum=0;
	
	map<int,int>mp;
	
	int res=0;
	
	for(int i=0;i<n;i++)
	{
		csum+=a[i];
		
		if(csum==gsum)
		res++;
		
		if(mp.find(csum-gsum)!=mp.end())
		res+=mp[csum-gsum];
		
		mp[csum]++;
	}
	cout<<res;
}
