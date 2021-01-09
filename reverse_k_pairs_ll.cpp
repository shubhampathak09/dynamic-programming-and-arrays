// reverse linked list in size of k

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


void printnode(struct node*head)
{
	
	while(head!=NULL)
	{
		cout<<head->data<<" ";
		head=head->next;
	}
	
}

struct node*reverse(struct node*head,int k)
{
	
	struct node*curr=head;
	struct node*temp=NULL;
	struct node*prev=NULL;
	int count=0;
	while(curr!=NULL&&count<k)
	{
		
		temp=curr->next;
		curr->next=prev;
		prev=curr;
		curr=temp;
		count++;
		
	}
	
	if(temp!=NULL)
	head->next=reverse(temp,k);
	
	return prev;
}

int main()
{
	
	struct node*head=new node(1);
	head->next=new node(2);
	head->next->next=new node(3);
	head->next->next->next=new node(4);
	head->next->next->next->next=new node(5);
	head->next->next->next->next->next=new node(6);
	head->next->next->next->next->next->next=new node(7);
    head->next->next->next->next->next->next->next=new node(8);
	
	printnode(head);
	
	cout<<endl;
	
	printnode(reverse(head,2));	
	
}
