#include<iostream>
using namespace std;
struct node
{ int data;
  node*next;
}*pfirst=NULL,*plast=NULL;
int countitem()
{ 
}
void insert(int item)
{  node*newnode = new node();
    newnode->data = item;
  if(pfirst==NULL &&plast==NULL)
  {  pfirst=newnode;
     plast = newnode;
     cout<<"Inserted : "<<newnode->data<<endl;
  }
  else
  {  plast->next = newnode;
     plast = newnode;
      newnode->next = pfirst;
      cout<<"Inserted : "<<newnode->data<<endl;
  }
}
void printal()
{  node*i,*temp;
   temp=pfirst->next;
   if(pfirst==NULL)
   {  cout<<"empty linked list"<<endl;
   }
   else
  {   cout<<pfirst->data<<endl;
    while(temp!=pfirst)
   {   cout<<temp->data<<endl;
      temp=temp->next;
   }
      }
}
void delelement()
{   node*temp,*ptr;
   if(pfirst==NULL)
   {  cout<<"No element to delete"<<endl;
   }
   else
   {   temp=pfirst;
       while(temp->next!=pfirst)
       {  ptr = temp;
          temp=temp->next;
	   }
	   ptr->next = temp->next;
	    delete(temp);
	    cout<<"Deletion Successfull!!"<<endl;
   }
}
void detect()
{  node*first,*second;
   first=second =pfirst;
  do
  {  first=first->next->next;
     second = second->next;
       if(first==second)
       {  cout<<"Cycle detected "<<endl;
          break;
	   }
  } while(first->next!=NULL);
}
int main()
{ insert(1);
insert(2);
insert(3);
insert(4);
insert(5);
printal();
delelement();
delelement();
printal();
detect();
}
