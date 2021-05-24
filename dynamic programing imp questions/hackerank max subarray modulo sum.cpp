// hackerank max subarray sum mod m

#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	
	int a[]={3,3,9,9,5};
	
	int n=sizeof(a)/sizeof(a[0]);
	
	int m=7;


//int a[]={10,7,18};

//int n=sizeof(a)/sizeof(a[0]);

//int m=13;	
	
	int prefix;
	
	prefix=a[0];
	
	int maxsum=INT_MIN;
	
	set<int>s;
	
	s.insert(prefix);
	
	
	for(int i=1;i<n;i++)
	{
		
		prefix=(prefix+a[i])%m;
		
		s.insert(prefix);
		
		set<int>::iterator it=s.find(prefix);
		it++;
		if(it!=s.end())
		{
			int val=(prefix-(*it)+m)%m;
			if(val>maxsum)
		    maxsum=val;
		}
		else
		{
			int val=(prefix)%m;
			if(val>maxsum)
			maxsum=val;
		}
	}
	
    cout<<maxsum;	
	
}
