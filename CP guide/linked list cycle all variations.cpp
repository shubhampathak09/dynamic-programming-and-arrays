// todo
// linked list detect cycle
// find starting poitn of linked list
// print the element in cycle
// return length of cycle
//remove the cycle
#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	struct node*next;
	node(int data)
	{
		this->data=data;
		this->next=NULL;
	}
};

bool detect_cycle(struct node*head,struct node* &temp)
{
	
	
	
	struct node *slow=head;
	struct node*fast=head;
	//struct node*temp;
	while(fast!=NULL&&fast->next!=NULL)
	{
		fast=fast->next->next;
		slow=slow->next;
		
		if(fast==slow)
		{
			//cycle
			temp=slow;
			return true;
		}
	}
	return false;
}

int main()
{
	
	struct node*temp=new node(-1);
	
	struct node*head=new node(1);
	head->next=new node(2);
	head->next->next=new node(3);
	head->next->next->next=new node(4);
	
	head->next->next->next->next=new node(5);
	
	head->next->next->next->next->next=new node(6);
	head->next->next->next->next->next->next=head->next->next;
   cout<<detect_cycle(head,temp)<<endl;
   cout<<temp->data<<endl;
   
   struct node*fast=head;
 //  struct node*slow=head;
    
   while(fast!=temp)
   {
   	fast=fast->next;
   	temp=temp->next;
   }
   cout<<"Start of cycle.."<<fast->data;
   
   cout<<endl;
   
   vector<int>result;
   result.push_back(temp->data);
   temp=fast->next;
   while(temp!=fast)
   {
   	result.push_back(temp->data);
   	temp=temp->next;
   }
   cout<<"Size of cycle is..";
   cout<<result.size()<<endl;
   cout<<"elements of cycle are..";
   for(auto x:result)
   {
   	cout<<x<<" ";
   }
   
   // remove the last element of cycle to remove cyke
   
    // either st=tore stor the ode where linked list starys
 //  cout<<endl;
  // cout<<fast->data;
   int sz=result.size();
   
   while(sz!=1)
   {
   	fast=fast->next;
   	sz--;
   }
   fast->next=NULL;
  // removing the cycle 
  // cout<<fast->data;
  cout<<endl;
  
  cout<<detect_cycle(head,temp);
   }
