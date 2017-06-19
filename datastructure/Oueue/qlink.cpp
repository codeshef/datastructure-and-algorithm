//implementation of queue using linked list
#include<iostream>
using namespace std;
class queue
{
	private:
		struct node
	{
	int data;
	node*next;
}*front,*rear;
 public:
 	queue()
 	{
 		front=NULL;
 		rear=NULL;
	 }
  void insert(int item);
  void deleteq();
  void display();	
  };
  void queue::insert(int item)
  {
  	node*newnode = new node();
  	newnode->data = item;
  	if(front==NULL)
  	{ front= newnode;
  	  rear = newnode;
  	   newnode->next = NULL;
	  }
	  else
	  {
	  	rear->next = newnode;
	  	rear= newnode;
	  	newnode->next = NULL;
	  }
  }
  void queue::display()
  {
  	node*front1=front;
  	if(front1==NULL && rear==NULL)
  	{ cout<<"queue is empty"<<endl;
	  }
	  else
	  {
	  	while(front1!=rear)
	  	{ cout<<"data : "<<front1->data<<endl;
	  	  front1=front1->next;
		  }
		  if(front1==rear)
		  { cout<<"data : "<<front1->data<<endl;
		  }
	  }
  }
  void queue::deleteq() 
  {
  	if(front==NULL && rear==NULL)
  	{ cout<<"Nothing to delete"<<endl;
	  }
	  else
	  {
	  	node*temp;
	  	temp= front;
	  	int item = temp->data;
	  	front = temp->next;
	  	delete(temp);
	  	
	  }
  }
int main()
{ queue q;
	for(int i=0;i<11;i++)
	{ q.insert(i);
	}
	cout<<"Queue before deletion : "<<endl;
	q.display();
	q.deleteq();
	cout<<"Queue after deletion : "<<endl;
	q.display();
	}
