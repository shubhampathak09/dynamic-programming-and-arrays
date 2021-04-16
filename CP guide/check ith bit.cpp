// check ith bit is set 
#include<bits/stdc++.h>
using namespace std;


//check
int main()
{
	
//	int n=5; //101
int n=5;	
// check 0th,1st and 2nd bit
  for(int i=0;i<=2;i++)
  {
  
  int c=(1<<i);
  
  if(n&c)
  cout<<"set"<<endl;
  else
  cout<<"not set"<<endl;
}
	
}
