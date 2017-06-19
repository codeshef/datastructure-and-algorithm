//to delete last node 
// to move last of the linked list to front
#include<iostream>
using namespace std;
struct node
{  int data;
   node *next;
}*pfirst,*plast;
int countitem();
void insert(int val)
{  int t;
   node *item;//new element to be inserted
   item = new node();
   item->data=val;//insert new element to list
   if(pfirst==NULL && plast==NULL)
   { item->next=NULL;
     pfirst=item;
     plast=item;
     cout<<"Inserted : "<<item->data<<endl;
   }
   else 
   {  item->next=NULL;
   plast->next=item;
   plast=item;
   cout<<"Inserted : "<<item->data<<endl;
   }
}
// code to count number of items in the list
int countitem()
{ node*i;
  int t=0;
  i= pfirst;
  while(i!=NULL)
  { t=t+1;
     i=i->next;
  }
  return t;
}
void deletelast()
{    node*currnode=pfirst;
    node*nextnode;
    if(currnode==NULL)
    {  cout<<"Linked list is empty"<<endl;
	}
	else if(currnode->next==NULL)
	{ currnode=NULL;
	}
	else
	{  currnode=pfirst;
	while(currnode->next!=NULL)
	{  nextnode= currnode;
	   currnode=currnode->next;
	}
	nextnode->next=NULL;
	}
}
void printal()
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

void move()
{  node*currentnode=pfirst;
   node*nextnode;
   while(currentnode->next!=NULL)
   {  nextnode=currentnode;
   currentnode=currentnode->next;
   }
   currentnode->next=pfirst;
   nextnode->next=NULL;
   pfirst = currentnode;
}
void reverse()
{  node*pre=NULL;
   node*current=pfirst;
   node*nextnode;
   while(current!=NULL)
   { nextnode=current->next;
      current->next=pre;
      pre=current;
      current=nextnode;
   }
   pfirst = pre;
}
int main()
{ insert(1);
  insert(2);
  insert(3);
  insert(4);
  insert(5);
  insert(6);
  deletelast();
  reverse();
  printal();
}
