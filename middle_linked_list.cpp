
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


int getmiddle(struct node*head)
{
	
	struct node*slow=head;
	struct node*temp=head;
	struct node*fast=head;
	
	while(fast&&fast->next!=NULL)
	{
		temp=slow;  // this is important step
		slow=slow->next;
		fast=fast->next->next;
	}
	
	return slow->data; //second middle element;
}

int main()
{
	struct node*head=new node(1);
	
	head->next=new node(2);
	
	head->next->next=new node(3);
	
	
	head->next->next->next=new node(4);
	
	cout<<getmiddle(head);
}
