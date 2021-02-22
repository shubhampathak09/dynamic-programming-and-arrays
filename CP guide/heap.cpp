#include<bits/stdc++.h>
using namespace std;




class minheap
{
	
	int *ar;
	int capacity;
	int current;
 	
	public:
		minheap(int cap)
		{
			capacity=cap;
			ar=new int[cap];
			current=0;
			
		}
	
	void swap(int *a,int *b)
	{
		int temp=*a;
		*a=*b;
		*b=temp;
		
		return;
		}	
		
	int parent(int i)
	{
		return (i-1)/2;
		
		}
		
	int left(int i)
	{
		return 2*i+1;
			}
	int right(int i)
	{
		return 2*i+2;
					}
					
					
	void insertkey(int k)
	{
		if(current==capacity)
		{
			cout<<"cant insert into heap";
			return;
		}
		current++;
		int i=current-1;
        ar[i]=k;
			
		while(i!=0&&ar[parent(i)]>ar[i])
		{
			swap(&ar[parent(i)],&ar[i]);
			i=parent(i);
		}
	
	
									}
	
	
	void heapify(int i)
	{
		
		
		
		int mini=i;
		int l=left(i);
		int r=right(i);
		if(l<capacity&&ar[l]<mini)
		mini=l;
		
		if(r<capacity&&ar[r]<mini)
		mini=r;
		
		
		if(mini!=i)
		{
			swap(&ar[i],&ar[mini]);
			heapify(mini);
		}
	}
	
									
	int extractmin()
	{
	
	if(current<=0)
	{
		return INT_MAX;
		}
		
	if(current==1)
	{
		current--;
		return ar[0];
		}
			
		int root=ar[0];
		ar[0]=ar[current-1];	
		current--;															
		heapify(0);
		return root;
	}
};

int main()
{
	
	minheap h(11);
	
	
  h.insertkey(3);
  h.insertkey(2);
  h.insertkey(1);
  h.insertkey(14);
  
  
   cout<<h.extractmin();   //1
    
    cout<<endl;
    
   cout<<h.extractmin();    //2
   
   cout<<endl;
    
   cout<<h.extractmin();    //3 
   
   
   // not the expected outputs:P
}
