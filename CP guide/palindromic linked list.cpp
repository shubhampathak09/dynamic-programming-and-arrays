// check if linked list is palindrome

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


struct node*reverse(struct  node*head)
{
	
	struct node*temp;
	struct node*prev=NULL;
	
	while(head!=NULL)
	{
		temp=head->next;
		head->next=prev;
		prev=head;
		head=temp;
	}
	return prev;
}


bool ispalindrome(struct node*head)
{
	
	struct node*slow=head;
	struct node*fast=head;
	
	while(fast!=NULL&&fast->next!=NULL)
	{
		slow=slow->next;
		fast=fast->next->next;
		
	}
	
	fast=head;
	slow=reverse(slow);
	
	while(fast!=NULL)
	{
		if(fast->data!=slow->data)
		return false;
		
		fast=fast->next;
		slow=slow->next;
	}
	return true;
}

int main()
{


	struct node*head=new node(1);
	head->next=new node(3);
	head->next->next=new node(2);
	
	head->next->next->next=new node(3);
	head->next->next->next->next=new node(0);
	//head->next->next->next->next->next=new node(1);
	
	cout<<ispalindrome(head);
	
}
