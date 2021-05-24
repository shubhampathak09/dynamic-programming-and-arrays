// Rotate a linked list

#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	//struct node*left;
	//struct node*right;
	struct node*next;
	node(int data)
	{
		this->data=data;
	//	left=NULL;
	//	right=NULL;
	next=NULL;
	}
};

int main()
{
	
	struct node*head=new node(1);
	head->next=new node(2);
	head->next->next=new node(3);
	head->next->next->next=new node(4);
	head->next->next->next->next=new node(5);
	
	
	struct node*tail=head;
	
	int k=2;
	int count=1;
	
	
	while(tail->next!=NULL)
	{
	tail=tail->next;
	count++;
	}
	
	//cout<<count;
	
	tail->next=head;
	
	
	int iter=count-(k%count);
	int st=1;
	struct node*tp=head;
	while(st<iter)
	{
	tp=tp->next;
	st++;	
	}
	
	head=tp->next;
	
	//cout<<head->data;
	
	
	tp->next=NULL;
	
	struct node*tp1=head;
	
	while(tp1!=NULL)
	{
		cout<<tp1->data<<" ";
		tp1=tp1->next;
		
	}
	
	
}


// nice question
