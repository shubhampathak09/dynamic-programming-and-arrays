#include<bits/stdc++.h>
using namespace std;


struct box
{
	
	int h,w,d;
	
	box(int h,int w,int d)
	{
		this->h=h;
		this->w=w;
		this->d=d;
	}
};



bool cmp(box b1,box b2)
{
	return b1.d+b1.w>b2.d+b2.w;
}



int maxheight(vector<box>rot)
{
	
	int n=arr.size();
     
	int dp[n];
	
	dp[0]=rot[0].h;
	
	for(int i=1;i<n;i++)
	{
		int mx=0;
		for(int j=0;j<i;j++)
		{
			if(rot[j].w*rot[j]*d>rot[i]*w+rot[i]*d)
			{
				if(dp[j]>mx)
				mx=dp[j];
			}
		}
		dp[i]=mx+rot[i]*h;
		
		if(dp[i]>ovmax)
		{
			ovmax=dp[i];
		}
		}	
	
	return ovmax;
	
}

int main()
{
	
vector<box>arr={{4,6,7},{1,2,3},{4,5,6},{10,12,32}};

int n=4;

vector<box>rot;




int index=0;

for(int i=0;i<n;i++)
{
	
	// h w d
	
	
	rot[index].h=arr[i].h;
	rot[index].w=max(arr[i].w,arr[i].d);
	rot[index].d=min(arr[i].w,arr[i].d);
	
	index++;
	
	rot[index].h=arr[i].w;
	rot[index].w=max(arr[i].h,arr[i].d);
	rot[index].d=min(arr[i].h,arr[i].d);
	
	index++;
	
	rot[index].h=arr[i].d;
	rot[index].w=max(arr[i].h,arr[i].w);
	rot[index].d=min(arr[i].h,arr[i].w);
	
	index++;   //fuck
}


sort(rot.begin(),rot.end(),cmp);
//cout<<arr[0].h;


for(int i=0;i<arr.size();i++)
{
	cout<<rot[i].h<<" "<<rot[i].w<<" "<<rot[i].d;
	cout<<endl;
}


//int ans=maxheight(arr);
	
}


// fucking life
//fml
//fml
//fml
