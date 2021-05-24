#include<bits/stdc++.h>
using namespace std;

struct box
{
	int h,w,d;
};


bool cmp(box b1,box b2)
{
	
	return b1.w*b1.d>b2.w*b2.d;
	
}





int main()
{
	
	
	vector<box>v={{2,3,1},{4,1,2},{5,6,3},{4,2,3},{5,7,2}};
	
	int n=v.size();
	
	vector<box>res(3*n);  // need to intidalize vector with some size;
	
	int index=0;
	for(int i=0;i<v.size();i++)
	{
		
		// h w d
		res[index].h=v[i].h;
		res[index].w=max(v[i].w,v[i].d);
		res[index].d=min(v[i].w,v[i].d);	
		
		index++;
		
		res[index].h=v[i].w;
		res[index].w=max(v[i].h,v[i].d);
		res[index].d=min(v[i].h,v[i].d);	
		
		index++;
		
		
		res[index].h=v[i].d;
		res[index].w=max(v[i].h,v[i].w);
		res[index].d=min(v[i].h,v[i].w);	
		
		index++;
		 
		 
		 
		 
	}
	
	
	/*for(int i=0;i<res.size();i++)
	{
		
		cout<<res[i].h<<" "<<res[i].w<<" "<<res[i].d;
		cout<<endl;
		
	}*/
	
	sort(res.begin(),res.end(),cmp);
     
		for(int i=0;i<res.size();i++)
	{
		
		cout<<res[i].h<<" "<<res[i].w<<" "<<res[i].d;
		cout<<endl;
		
	} 
    
    int k=res.size();
	
	int dp[k];
	
	dp[0]=res[0].h;
	
	
	int ovmax=0;
	
	for(int i=1;i<k;i++)
	{
		
		int mx=0;
		for(int j=0;j<i;j++)
		{
			if(((res[j].w)*(res[j].d))>((res[i].w)*(res[i].d)))
			{
				if(dp[j]>mx)
				mx=dp[j];
			}
		}
		
		    dp[i]=mx+res[i].h;
            if(dp[i]>ovmax)
			ovmax=dp[i];        	
			  }
			 
			 
			 cout<<ovmax;  	 	
}
