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


struct node*reverse(struct node*head)
{
	struct node*prev=NULL;
	struct node*temp;
	while(head!=NULL)
	{
		temp=head->next;
		head->next=prev;
		prev=head;
		head=temp;
	}
	return prev;
}

int main()
{
	
	
struct node*head=new node(1);
head->next=new node(2);
head->next->next=new node(3);
head->next->next->next=new node(4);	

struct node*t1=head;
while(t1!=NULL)
{
	cout<<t1->data;
	t1=t1->next;
}
	

struct node *nh=reverse(head);

 




cout<<endl;
while(nh!=NULL)
{
	cout<<nh->data;
	nh=nh->next;
}

/*
temp,prev;
temp=head->next;

head->next=prev;
prev=head
head=temp
*/

	
}
