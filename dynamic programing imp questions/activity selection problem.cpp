#include<bits/stdc++.h>
using namespace std;

struct activity
{
	int start;
	int last;
};

bool cmp(struct activity s1,struct activity s2)
{
	
	
	return s1.last<s2.last;
	
}

int main()
{
	
	
vector<activity>a={{1,2},{3,4},{0,6},{5,7},{8,9},{5,9}};	


int n=a.size();

//cout<<n;

sort(a.begin(),a.end(),cmp);

/*
for(int i=0;i<n;i++)
{
	
	cout<<a[i].start<<" "<<a[i].end;
	cout<<endl;
	}	
*/

int count=1;
int str=a[0].start;
int las=a[0].last;


for(int i=1;i<n;i++)
{
if(a[i].start>=las)
{
	count++;
	las=a[i].last;
}
	 
}

cout<<count;

cout<<endl;


cout<<"Printing  activites..";	

cout<<endl;

int ls=a[0].last;

cout<<a[0].start<<" "<<a[0].last;

cout<<endl;


for(int i=1;i<n;i++)
{
	
	if(a[i].start>=ls)
	{
		cout<<a[i].start<<" "<<a[i].last;
		cout<<endl;
		ls=a[i].last;
	}
	
}

}

