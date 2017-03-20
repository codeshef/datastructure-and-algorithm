// Linked List
#include<iostream>
using namespace std;
struct node
{
	int data;
	node*next;
}*pfirst=NULL,*plast=NULL;
void insertbegin(int item)
{ 
   node*newnode = new node();
   newnode->data = item;
  if(pfirst==NULL&& plast==NULL)
  { 
  	newnode->next = NULL;
  	pfirst = newnode;
  	plast= newnode;
  }
  else
  {
  	newnode->next = pfirst;
  	pfirst = newnode;
  }
	
}
void insertend(int item)
{
	node*newnode = new node();
	newnode->data = item;
	if(pfirst==NULL&& plast==NULL)
  { 
  	newnode->next = NULL;
  	pfirst = newnode;
  	plast= newnode;
  }
  else
  { 
	plast->next= newnode;
	plast=newnode;
	newnode->next =NULL;
  }
}

void deletelist()
{ node*ptr;
  node*temp=pfirst;
  while(temp->next!=NULL)
  {
  	   ptr=temp;
  		temp=temp->next;
		  
		  }
		  
  		ptr->next = temp->next;
	    delete(temp);
	    cout<<"Deletion Successfull!!"<<endl;
}

void print()
{ node *temp=pfirst;
  while(temp!=NULL)
  {  cout<<"data : "<<temp->data<<endl;
  temp=temp->next;
  }

	
}
int main()
{
	insertbegin(1);
	insertbegin(2);
	insertbegin(3);
	insertend(4);
	insertend(5);
	insertend(6);
	insertbegin(6);
	print();
	deletelist();
	print();

	
}
