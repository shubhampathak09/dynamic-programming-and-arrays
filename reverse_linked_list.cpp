#include<bits/stdc++.h>
using namespace std;

// 

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

void printlist(struct node*head)
{
	while(head!=NULL)
	{
		cout<<head->data<<" ";
		head=head->next;
	}
}

void reverse(struct node*head)
{
	
	struct node*curr=head;
	struct node*temp=NULL;
	struct node*prev=NULL;
	
	
	while(curr!=NULL)
	{
	
	temp=curr->next;
	// logic to reverse
	curr->next=prev;
	prev=curr;
	curr=temp;

}

// prev is new head

printlist(prev);

}

int main()
{

struct node*head=new node(1);

head->next=new node(2);

head->next->next=new node(3);

head->next->next->next=new node(4);

printlist(head);

cout<<endl;

reverse(head);	
	
}
