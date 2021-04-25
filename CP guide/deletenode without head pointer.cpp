// delete node with just node ref

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



void denode(struct node*pos)
{
	
	if(!pos->next)
	return;
	
	struct node*del=pos->next;
	
	pos->data=del->data;
	
	pos->next=del->next;
	
	free(del);
}

void printl(struct node*c)
{
	while(c!=NULL)
	{
		cout<<c->data<<" ";
		c=c->next;
	}
	
	cout<<endl;
}

int main()
{
	
	struct node*head=new node(1);
	
	
	head->next=new node(2);
	
	head->next->next=new node(3);
	
	head->next->next->next=new node(4);
	
	printl(head);
	
	denode(head->next->next);
	
	printl(head);
}
