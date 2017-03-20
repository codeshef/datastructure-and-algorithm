#include<iostream>
using namespace std;
struct node
{  int data;
   node*forward;
   node*back;
}*pfirst=NULL,*plast=NULL;
void insert(int val)
{  node* newnode= new node();
   newnode->data = val;
   if(pfirst==NULL)
   {  pfirst= newnode;
     newnode->forward = NULL;
   }
   else
   {  node*s;
      s= pfirst;
      while(s->forward!=NULL)
      {  s=s->forward;
    }
    s->forward =newnode;
    newnode->forward=NULL;
    newnode->back = s;
   }
}
void deleteval(int val)
{  cout<<"Delete Operation"<<endl;
   node *tmp,*p;
   tmp= pfirst;
   if(pfirst->data==val )
   { tmp = pfirst;
      pfirst= pfirst->forward;
      pfirst->back = NULL;
      cout<<"Deleted : "<<val<<endl;
       delete tmp;
       return;
   }
    p= pfirst;
    while (p->forward->forward != NULL)
    {   
        if (p->forward->data== val)  
        {
            tmp = p->forward;
            p->forward = tmp->forward;
            tmp->forward->back = p;
            cout<<val<<" Deleted"<<endl;
           delete tmp;
            return;
        }
        p = p->forward;
    }
    if (p->forward->data == val)    
    { 	
        tmp = p->forward;
        delete tmp;
        p->forward = NULL;
        cout<<val<<" Deleted"<<endl;
        return;
    }
    cout<<val<<" Not found!"<<endl;
}
void display()
{  node*tmp;
   tmp=pfirst;
   while(tmp->forward!=NULL)
   {  cout<<"value : "<<tmp->data<<endl;
      tmp=tmp->forward; 
   }
   cout<<"value : "<<tmp->data<<endl;
   tmp->forward = NULL;
   
}
int main()
{   int n,i,x,y;
cout<<"Number of values you want to insert: ";
 cin>>n;
  for(i=0;i<n;i++)
  { cin>>x;
    insert(x);
  }
  display();
  cout<<"Enter the value you want to delete : ";
  cin>>y;
   deleteval(y);
   display();
}
