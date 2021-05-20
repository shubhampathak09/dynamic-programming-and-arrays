// subarray need to be sorted

#include<bits/stdc++.h>
using namespace std;


int main()
{
	
	vector<int>a={1,2,3,4,5,8,6,7,9,10,11};
	vector<int>temp=a;
	
	sort(temp.begin(),temp.end());
	
	int nleft=-1;
	int mright=-1;
	
	int sz=a.size();
	for(int i=0;i<sz;i++)
	{
		if(temp[i]!=a[i])
		{
			nleft=i;
			break;
		}
	}
	
	
	for(int i=sz-1;i>=0;i--)
	{
		if(temp[i]!=a[i])
		{
			mright=i;
			break;
		}
	}
	
	cout<<nleft<<" "<<mright;
	
}
