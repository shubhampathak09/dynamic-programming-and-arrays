/*
Given number of pages in n different books and m students. 
The books are arranged in ascending order of number of pages.
Every student is assigned to read some consecutive books.
the task is to assign books in such a way that the maximum number of pages assigned
to a student is minimum.

Example :
	
Input : pages[] = {12, 34, 67, 90}
        m = 2
Output : 113

*/

#include<bits/stdc++.h>
using namespace std;

int sum(int a[],int i,int j)
{
	int s=0;
	for(int k=i;k<=j;k++)
	s+=a[k];
	return s;
}

int book_allocation(int n,int m,int a[])
{
	
	if(n==1)
	return a[0];
	
	if(m==1)
	return sum(a,0,n-1);
	
	int best=INT_MAX;
	
	for(int i=1;i<=n;i++)
	{
		int temp=max(book_allocation(i,m-1,a),sum(a,i,n-1));
		best=min(best,temp);
	}
	return best;
}

int main()
{
	
	int pages[]={12,34,67,90};
	
	int n=sizeof(pages)/sizeof(pages[0]);
	
	int m=2;
	
	
	cout<<book_allocation(n,m,pages);
}
	
