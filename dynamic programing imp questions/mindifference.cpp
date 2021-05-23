#include<bits/stdc++.h>
using namespace std;


int abs(int a,int b)
{
	if(a>b)
	return a-b;
	else
	return b-a;
}

int main(){
	
	vector<int>a={23,5,10,17,30};
	vector<int>b={26,134,135,14,19};
	
	
	// 5 10 17 23 30
	// 14 19 26 134 135
	
	int mindiff=INT_MAX;
	
	int aindex=-1;
	int bindex=-1;
	
	for(int i=0;i<a.size();i++)
	{
		for(int j=0;j<b.size();j++)
		{
			
			
			int diff=abs(a[i]-b[j]);
			if(diff<mindiff)
			{
				mindiff=diff;
				aindex=i;
				bindex=j;
			}
		}
	}
	
	cout<<a[aindex]<<" "<<b[bindex];
	
	
	//o(n^2)
}
