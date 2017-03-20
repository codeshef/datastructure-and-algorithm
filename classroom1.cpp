#include<iostream>
using namespace std; 
    struct node
    { int data;
       node*next;
	}*pfirst=NULL,*plast=NULL;
	node* search(int y);
	// program to count no of elements in linked list
	int countitem()
	{  int t=0;
	   node*i;
	   i=pfirst;
	   while(i!=NULL)
	   {  t=t+1;
	      i=i->next;
	   }
	   return(t);
	}
	// program to insert node in linked list
	void insert(int x,int y)
	{   node*newnode= new node();
	    newnode->data=x;
	    node* pos;
	       pos= search(y);
	    if(pfirst==NULL && plast==NULL)
	    {   newnode->next=NULL;
	        pfirst= newnode;
	        plast=newnode;
		}
		  else
		  {
			newnode->next=pos;
         }
	}
	// program to search an element in linked list
	struct node* search(int y)
	{   node *i;
	    i=pfirst;
		while(i!=NULL)
		{  if(i->data==y)
		   {  return(i);
		   
		   i=i->next;}
		}
	    
	}
	// program to print element of linked list
	void display()
	{ node *i;
  i=pfirst;
  if(countitem()>0)
  {  while(i!=NULL)
    {  cout<<i->data<<endl;
        i=i->next;
	}
  }
  else
  { cout<<"No element"<<endl;
  }
	}
	
int main()
{    insert(1,1);
     insert(2,1);
     insert(3,2);
     insert(5,3);
     display();
}
