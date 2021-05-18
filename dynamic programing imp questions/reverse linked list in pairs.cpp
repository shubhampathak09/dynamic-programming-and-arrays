// reverse a linked list in k pair

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

struct node*reverse(struct node*head,int k)
{
	
	if(head==NULL)
	return NULL;
	
	int count=0;
	
	struct node*curr=head;
	struct node*prev=NULL;
	struct node*nnext=NULL;
	
	while(curr!=NULL&&count<k)
	{
		
		nnext=curr->next;
		curr->next=prev;
		prev=curr;
		curr=nnext;
		count++;
	}
	
	if(curr!=NULL)
	return reverse(curr,k);
	
    return prev;	
}


void printlist(struct node*temp)
{
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}

int main()
{
	
	struct node*head=new node(1);
	head->next=new node(2);
	head->next->next=new node(3);
	head->next->next->next=new node(4);
	head->next->next->next->next=new node(5);
	
	struct node*temp=head;
	struct node*temp1=head;
	
	printlist(temp);
	
	struct node*rv=reverse(temp1,2);
	
	cout<<endl;
	
	printlist(rv);
	
	 
	  
	 
	 // kya ho raha hai
	 
	//printlist(rv);	
}
