//// algo reverse linked list
//
//1-2-3-4-5-6
//
//struct node*curr=head;
//
//struct node*temp=NULL;
//
//struct node*prev=NULL;
//
//
//while(curr!=NULL)
//{
//	
//	temp=curr->next;
//	curr->next=prev;
//	prev=curr;
//	curr=temp;
//	// simple algo
//
//}



#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	struct node*next;
	
	node(int data)
	{
		this->data=data;
		next=NULL;
	}
};



void reverse(struct node*head)
{
	
	struct node*curr=head;
	struct node*temp;
	struct node*prev=NULL;
	
	while(curr!=NULL)
	{
		temp=curr->next;
		curr->next=prev;
		prev=curr;
		curr=temp;
	}
	head=prev;
	
	while(head!=NULL)
	{
		cout<<head->data<<" ";
		head=head->next;
	}
}

int main()
{
	
	struct node*head=new node(1);
	head->next=new node(2);
	head->next->next=new node(3);
 
	
	
	struct node*t=head;
	while(t!=NULL)
	{
		cout<<t->data<<" ";
		t=t->next;
	}
	
	
	cout<<endl;
	
	reverse(head);
	
	
	 
}
