#include<iostream>
using namespace std;
struct node
{  int data;
   node *next;
}*pfirst=NULL,*plast=NULL;
void insert(int x)
{  node *newnode = new node();
   newnode->data=x;
   if(pfirst==NULL)
    { pfirst = newnode;
      newnode->next = pfirst;
      pfirst=newnode;
	}
	else
	{  node *s;
	   s= pfirst;
	   newnode->next = pfirst;
	   while(s->next!=pfirst)
	   { s= s->next;
	   }
	   s->next = newnode;
	   
	}
	}
	void linkdelete(int val)
	{  node *tmp,*p;
		tmp=pfirst;
		if(tmp->data==val)
			;
		
		while(tmp->next!=pfirst){
			if(tmp->next->data==val){
				tmp->next=tmp->next->next;
				cout<<"Deleted : "<<val<<endl;
			}
			tmp=tmp->next;
		}
	}
	void display()
	{  node *ptr = pfirst;
	   cout<<"Header : "<<ptr->data<<endl;
	   ptr=ptr->next;
	   
	    while(ptr->next!=pfirst)
	    {  cout<<"value : "<<ptr->data<<endl;
	      ptr=ptr->next;
		}
		cout<<"value : "<<ptr->data<<endl;
	}
	
int main()
{  int n,i,x,y;
cout<<"Number of values you want to insert: ";
 cin>>n;
  for(i=0;i<n;i++)
  { cin>>x;
    insert(x);
  }
  display();
  cout<<"Enter the value you want to delete : ";
  cin>>y;
  linkdelete(y);
  display();
}
