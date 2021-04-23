// revisiting segbement tree and emq

#include<bits/stdc++.h>
using namespace std;


int a[10001];
int seg[4*10001];


void build(int seg[],int segindex,int low,int high,int a[])
{
	
	if(low==high)
	{
		
		seg[segindex]=a[low];
		return;
	}
	
	int mid=(low+high)/2;
	
	build(seg,2*segindex+1,low,mid,a);
	build(seg,2*segindex+2,mid+1,high,a);
    
    seg[segindex]=seg[2*segindex+1]+seg[2*segindex+2]; 	
}

int query(int segindex,int l,int r,int lg,int rg)
{
	
	
	if(l>=lg&&r<=rg)
	return seg[segindex];
	
	if(r<lg||l>rg)
	return 0;
	
	
	int mid=(l+r)/2;
	
	return query(2*segindex+1,l,mid,lg,rg)+query(2*segindex+2,mid+1,r,lg,rg);
	
}


void update(int si,int sl,int sr,int pos,int diff)
{
	
	if(pos<sl||pos>sr)
	return;
	
	
	seg[si]+=diff;
	if(sl!=sr)
{
	int mid=(sl+sr)/2;
	update(2*si+1,sl,mid,pos,diff);
	update(2*si+2,mid+1,sr,pos,diff);

}
}

int main()
{
	
 
//build(seg,0,0,n-1,a);	

// build
//query
// and update
}
