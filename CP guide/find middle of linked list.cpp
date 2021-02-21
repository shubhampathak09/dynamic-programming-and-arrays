// linked list
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

int findmiddle1(struct node*head)
{
	struct node*f=head;
	struct node*s=head;
	
	while(f!=NULL&&f->next!=NULL)
	{
		f=f->next->next;
		s=s->next;
	}
	return s->data;
}

int main()
{

struct node*head=new node(1);
head->next=new  node(2);
head->next->next=new node(3);
head->next->next->next=new node(4);
head->next->next->next->next=new node(5);
cout<<findmiddle1(head);	
	
}

