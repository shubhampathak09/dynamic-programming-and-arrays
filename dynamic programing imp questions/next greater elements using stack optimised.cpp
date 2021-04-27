// next greater element

#include<bits/stdc++.h>
using namespace std;


int main()
{
	
	
	int a[]={2,3,1,15,4,20,3,0,8,7};
	
	
	int n=sizeof(a)/sizeof(a[0]);
	
	
	stack<int>s;
	
	s.push(a[0]);
	
	
	for(int i=1;i<n;i++)
	{
		
		
		while(!s.empty()&&s.top()<a[i])
		{
			cout<<s.top()<<" "<<a[i];
			cout<<endl;
			s.pop();
		}
		s.push(a[i]);
	}
	
	while(!s.empty())
	{
	 cout<<s.top()<<" "<<-1;
	 cout<<endl;
		s.pop();
	}
	
}

// good
