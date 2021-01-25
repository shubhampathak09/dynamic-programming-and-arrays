 #include<bits/stdc++.h>
 
 using namespace std;
 
 int maxref=1;
 
 int lis(int a[],int n)
 {
 	if(n==1)
 	return 1;
 	
 	int result,max_endinghere=1;
 	
 	for(int i=1;i<n;i++)
 	{
 		result=lis(a,i);
 		if(a[i-1]<a[n-1]&&result+1>max_endinghere)
 		{
 			max_endinghere=1+result;
		 }
	 }
 	
 	if(max_endinghere>maxref)
 	maxref=max_endinghere;
 	
 	return max_endinghere;
 }
 
 int main()
 {
 	
 	int a[]={10,22,9,33,21,50,41,60,80};
 	
 	int n=sizeof(a)/sizeof(a[0]);
 	
 	
 	int val=lis(a,n);
 	
 	cout<<maxref;
 	
 	
 	
 }
