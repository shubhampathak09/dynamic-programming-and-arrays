// min heap based approacj

#include<bits/stdc++.h>
using namespace std;



int main()
{
	
vector<int>a={3,4,5,6,1,15,7,90,22,100,88,71,15,-3};

//find 5 largest elelemts;	


priority_queue<int,vector<int>,greater<int>>pq;
int k=5;

int n=a.size();
int ct=0;

for(int i=0;i<n;i++)
{
 pq.push(a[i]);
 
 if(pq.size()>k)
 {
 	pq.pop();
 }
 
}

while(!pq.empty())
{
	cout<<pq.top()<<" ";
	pq.pop();
}

}
