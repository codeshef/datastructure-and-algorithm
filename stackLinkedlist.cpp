#include<iostream>
#include<conio.h>
using namespace std;
 struct node{
 	int data;
 	struct node *next;
 } *top=NULL;
 void push(int);
 void pop();
 void display();
int main()
{  for(int i=0;i<11;i++)
 {  push(i);
 }
   pop();
   pop();
   pop();
   display();
}
void push(int n)
{  struct node *newnode;
    newnode = new node();
    newnode->data = n;
    if(top==NULL)
    {  top= newnode;
	newnode->next=NULL;
	}
	else
	{ newnode->next = top;
	   top = newnode;
	   cout<<"insert successfully"<<endl;
	}
   
}

void pop()
{ if(top==NULL)
  {  cout<<"stack is empty"<<endl;
  }
  else
  {  struct node *temp = top;
      top=temp->next;
      delete(temp);
      cout<<"deleted successfully"<<endl;
  }
}
void display()
{  if(top==NULL)
   { cout<<"string is empty"<<endl;
   }
   else
   { struct node *temp =top;
       while(temp->next!=NULL)
       {  cout<<temp->data<<endl;
           temp =temp->next;
	   }
   }
}
