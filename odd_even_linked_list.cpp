// xor linked list
// odd even linked list
//
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

void printlist(struct node*head)
{
	while(head!=NULL)
	{
	cout<<head->data<<" ";
	head=head->next;	
	}
}

struct node*oddevenLinkedList(struct node*head)
{
	struct node*odd=head;
	struct node*even=head->next;
	struct node*evennode=even;
	
	while(even!=NULL&even->next!=NULL)
	{
		odd->next=even->next;
		odd=odd->next;
		even->next=odd->next;
		even=even->next;
	}
	odd->next=evennode;
	return head;
}

int main()
{
	
	struct node*head=new node(1);
	head->next=new node(2);
	head->next->next=new node(3);
	head->next->next->next=new node(4);
	
	printlist(head);
	
	cout<<endl;
	
	printlist(oddevenLinkedList(head));
	
	
	
}
