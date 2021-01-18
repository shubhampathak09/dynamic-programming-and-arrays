 #include<bits/stdc++.h>
 using namespace std;
// 
// struct node
// {
// 	int data;
// 	node(int data)
// 	{
// 		this->data=data;
// 		left=NULL;
// 		right=NULL;
//	 }
// };

int preindx=0;

int search(int x,int in[],int st,int end)
{
	for(int i=st;i<=end;i++)
	{
		if(in[i]==x)
		{
			return i;
		}
	}
	return -1;
}
 
void printpostorder(int in[],int pre[],int st,int en)
{
	if(st>en)
	{
		return;
	}
	
    int indx=search(pre[preindx],in,st,en);
	
	preindx++;
	
	printpostorder(in,pre,st,indx-1);
	printpostorder(in,pre,indx+1,en);
	cout<<in[indx]<<" ";
 } 
 
 int main()
 {
 	
 	int in[]={4,2,5,1,3,6};
 	int pre[]={1,2,4,5,3,6};
 	int n=sizeof(in)/sizeof(in[0]);
 	
 	printpostorder(in,pre,0,n-1);
 	
 }
