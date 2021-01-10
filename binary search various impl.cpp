// Valhalla Siege
//
//#include<bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//	
//	
//	int n,q;
//	cin>>n>>q;
//	
//	vector<int>warrior(n);
//	vector<int>arrows(q);
//	for(int i=0;i<n;i++)
//	cin>>warrior[i];
//	
//	for(int i=0;i<q;i++)
//	{
//	int k;
//	cin>>k;
//	
//	 while(k--)
//	 {
//	 	 for(int i=0;i<n;i++)
//	 	 {
//	 	 	if(a[i]>k)
//	 	 	{
//	 	 		
//			  }
//		  }
//	 }
//		}	
//	}
//	
//}

bool firstbaddversion(x);

int l=0,r=n-1;

while(l<r)
{
	int mid=(l+r)/2;
	
	if(badversion(mid))
	{
	r=mid;	
	}
	else
	{
		l=mid+1;
	}
}

return l;



// 
// first occurance of a number non smaller than target lower bound
int findfirst(vector<int>&nums,int target)
{
	int left=0,right=nums.size()-1;
	while(left<right)
	{
		int mid=left+(right-left)/2;
		if(nums[mid]<target)
		{
			left=mid+1;
		}
		else
		{
			right=mid;
		}
	}
	return left;
}

a=findFirst(nums,target);
int b=findFirst(nums,target+1);
return b-a;
//another way of binary search
lowerbound(nums.begin(),nums.end(),target),lowerbound(nums.begin(),nums.end(),target+1);


3
// find firs t element with some property


int left=0;
int right=n-1;

int f()
{
int left=0, right=n-1;

// maybe even the last elemetn does not have property

if(n==0|| !property(right))
{
	return -1 // no elements with that property
 } 
	
while(left<=right)
{
	int mid=(right+left)/2;
	if(property(mid))
	{
		right=mid;
	}
	else
	{
		left=mid+1;
	}
 }
 return left;
}
	
// last element with some proprrty

 ex 
 
 2 4 5 10 15 24
 
 // find first elelemt  not smallet the 6
 bool property(int i)
 {
 	return a[i]>=6;
 }
 // fin last element that is not greater than 20
 // so element just before that index with be of property->last element not greater than 20
 
 
 // find last element not greater than 20
 
 bool property(int i)
 {
 	return a[i]>20;
 }
 
 find first element gretaer than 20
 int index=firstlementgreater(int a[],int traget=20,int n)//
 
 ans=index-1;
 
 // 5 6 7  its inconvient in our case index will be -1 as no element exist that satisy the property
 seems wee need to have different impl of binary search depending on some property
 
1 2 3 4 5 6 7
 
1 3 6 10 15 21 28

3

vector<int>input;

int n;
cin>>n;

for(int i=0;i<n;i++)
{
	int a;
	cin>>a;
	input.push_back()
}

2  5 6 9 10 13

b=7
