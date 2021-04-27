// rmq segment trees
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
	seg[segindex]=min(seg[2*segindex+1],seg[2*segindex+2]);
}


int query(int segindex,int left,int right,int ql,int qr)
{
	
	
	if(left>=ql&&right<=qr)
	return seg[segindex];
	
	
	if(qr<left||ql>right)
	return INT_MAX;
	
	int mid=(left+right)/2;
	return min(query(2*segindex+1,left,mid,ql,qr),query(2*segindex+2,mid+1,right,ql,qr));
	
}

void updated(int segindex,int sl,int sr,int diff,int pos)
{
	
	
	if(pos>sr||pos<sl)
	return;
	
	seg[si]+=diff;
	
	if(sl!=sr)
    {
    	
    	mid=(sl+sr)/2;
    	update(2*segindex+1,sl,mid,diff,pos);
    	update(2*seginex+2,mid+1,sr,diff,pos);
	}
}

int main()
{
	
	a={7,2,3,0,5,10,3,12,18};
	
	 int n=9;
	
	build(0,0,n-1);
	
	cout<<query(0,0,8,0,4)<<endl;
    cout<<query(0,0,8,4,7)<<endl;
    cout<<query(0,0,8,7,8)<<endl;
    
    int pos=3;  // 0->6
    int val=6;
    
    update(0,0,n-1,a[pos]-val,pos)
    
}

