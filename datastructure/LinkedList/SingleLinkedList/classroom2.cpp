#include<iostream>
using namespace std; 
    struct node
    { int data;
       node*next;
	}*pfirst=NULL,*plast=NULL;
	void search(int y);
	// program to count no of elements in linked list
	int countitem1()
{ node*i;
  int t=0;
  i= pfirst;
  while(i!=NULL)
  { t=t+1;
     i=i->next;
  }
  return t+1;
}
	int countitem(int y)
	{  int t=0;
	   node*i;
	   i=pfirst;
	   while(i!=NULL)
	   {   if(i->data==y)
	       {  break;
		   }
	      t=t+1;
	      i=i->next;
	   }
	   return(t);
	}
	// program to insert node in linked list
	void insert(int x)
	{   node*newnode= new node();
	    newnode->data=x;
	    if(pfirst==NULL && plast==NULL)
	    {   newnode->next=NULL;
	        pfirst= newnode;
	        plast=newnode;
		}
		  else
		  {
			newnode->next=NULL;
			plast->next=newnode;
			plast=newnode;
         }
	}
	// program to search an element in linked list
	void searchinsert(int y,int x)
	{   node *i;
	    i=pfirst;
	    int pos;
		while(i!=NULL)
		{  if(i->data==y)
		   {  pos=countitem(y);
		     cout<<"find the element" <<endl;
		      break;
		   }
		   i=i->next;
     	}
	       node*tb;
	        tb=pfirst;
	        for(int t=1;t<pos;t++)
	        {  tb=tb->next;
			}
		   node*ta;
         ta=pfirst;
       for(int t=1;t<pos+1;t++)
      {  ta=ta->next;//move to inseration point
	  }
		   node*temp=new node();
		   temp->data=x;
		   tb->next = temp;
		    temp->next=ta;
		    
	}
	// program to print element of linked list
	void display()
	{ node *i;
  i=pfirst;
  if(countitem1()>0)
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
{    insert(1);
     insert(2);
     insert(3);
     insert(4);
     insert(5);
     display();
     searchinsert(4,6);
     display();
     searchinsert(3,10);
     display();
     searchinsert(6,9);
     display();
     return(0);
}
