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


struct node* reverse(struct node*root)
{
	
	struct node*curr=root;
	struct node*temp=NULL;
	struct node*prev=NULL;
	
	while(curr!=NULL)
	{
		temp=curr->next;
		curr->next=prev;
		prev=curr;
		curr=temp;
	}
	
	return prev;
}

//void printlist()

int main()
{
	
	struct node*head=new node(1);
	
	head->next=new node(2);
	
	head->next->next=new node(3);
	
	head->next->next->next=new node(4);
	
    struct node*temp=head;
	
	while(temp!=NULL)
	{
		
		cout<<temp->data<<" ";
		temp=temp->next;
		}	
	
	cout<<endl;
	
	struct node*ne=reverse(head);
	
	while(ne!=NULL)
	{
		cout<<ne->data<<" ";
		ne=ne->next;
	}
	
}
