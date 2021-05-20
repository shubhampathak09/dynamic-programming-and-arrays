//// length of longest band
//
//// approach
//
//// sort the arrat
//
//sort(a.begin(),a.end());
//
//or
//
//sort(a,a+n);
//
//int j;
//int len=1;
//for(int i=n-1;i>=0;i--)
//{
//	
////	int j=i;
////	int len=1;
//    j=i;
//	if(a[j]-a[j-1]!=1)
//	{
//		maxlen=max(len,maxlen);
//		//j=i;
//		len=1;
//	}
//	else if(a[j]-a[j-1]==1)
//	{
//		len++;
//	}
//}

// maybe while loop


#include<bits/stdc++.h>
using namespace std;


int findlargestband(vector<int>a)
{
	
	
	set<int>s;
	
	for(int i=0;i<a.size();i++)
	{
		s.insert(a[i]);
	}
	
	// now chck if elemtn can be head and find its len
	int largest=1;
	
	for(int i=0;i<a.size();i++)
	{
		
	if(s.find(a[i]-1)!=s.end())
	{
		continue;
		
		}	
	else
	{
		int cnt=1;
		
		int fnd=a[i]+1;
		while(s.find(fnd)!=s.end())
		{
			cnt++;
			fnd=fnd+1;
		}
		largest=max(largest,cnt);
		}	
	}
	
	return largest;
}

int main()
{
	
	
	vector<int>a={1,9,3,0,18,5,2,4,10,7,12,6};
	
    int ans=findlargestband(a);
    
    
    cout<<ans;
}
