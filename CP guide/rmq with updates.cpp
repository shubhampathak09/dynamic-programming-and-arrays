// rmq with updates

#include<bits/stdc++.h>
using namespace std;

vector<int>a(10001);
vector<int>seg(4*10001);



void build(int segindex,int left,int right)
{
	
	if(left==right)
	{
		seg[segindex]=a[left];
		return;
	}
	int mid=(left+right)/2;
	build(2*segindex+1,left,mid);
	build(2*segindex+2,mid+1,right);
	
	seg[segindex]=max(seg[2*segindex+1],seg[2*segindex+2]);
}


int query(int segindex,int rl,int rr,int sl,int sr)
{
	
	if(rl>=sl&&rr<=sr)
	return seg[segindex];
	
	if(rr<sl||sr<rl)
	return INT_MIN;
	
	int mid=(rl+rr)/2;
	return max(query(2*segindex+1,rl,mid,sl,sr),query(2*segindex+2,mid+1,rr,sl,sr));
}

void update(int segindex,int left,int right,int pos,int val)
{
	if(pos<left||pos>right)
	return;
	
	if(left==right)
	{
		a[pos]=val;
		seg[segindex]=val;
	}
	else
	{
	
	int mid=(left+right)/2;
	if(pos>=left&&pos<=mid)
	update(2*segindex+1,left,mid,pos,val);
	else
	update(2*segindex+2,mid+1,right,pos,val); 
	
	seg[segindex]=max(seg[2*segindex+1],seg[2*segindex+2]);
}
// return;
}



int main()
{
	
	
	a={1,3,5,7,9,11};
	
	int n=6;
	
	build(0,0,n-1);
	
//	cout<<query(0,0,n-1,1,3);
	
	cout<<query(0,0,n-1,1,4);
	
	update(0,0,n-1,1,8);
    
    
    cout<<endl;
    
	cout<<query(0,0,n-1,1,3);
		
//	cout<<endl;
	
	//update(0,0,n-1,1,8);
	
//	query(0,0,n-1,1,3);
	
}


// update not working


// ffixed :p
