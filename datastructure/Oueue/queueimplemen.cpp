#include<iostream>
using namespace std;
class queue{
	 public:
	int q[10],front,rear;
    queue()
    {  front=-1;
        rear=-1;}
        void insert(int n);
        void deleele();
        void display();
};
void queue::insert(int n)
{   if((front==0 && rear==9)||front==rear+1)
     {  cout<<"Overflow"<<endl;
	 }
	 if(front==-1)
	{  front=0;
	  rear=0;
	}
	else if(rear==9&& front!=0)
	  { rear=0;
	  }
	  else
	  { rear=rear+1;
	  }
	  q[rear]=n;
}
void queue :: deleele()
{  if(front==-1)
   { cout<<"underflow"<<endl;
   }
   int item = q[front];
   if(front==rear)
   {  front=0;
       rear=0;
   } 
   else if(front==9)
   {  front=0;
   }
   else
   {  front=front+1;
   }
}
void queue :: display()
{   for(int i=front;i<=rear;i++)
     {  cout<<q[i]<<" ";
	 }
}
int main()
{   queue c;
    c.insert(1);
	c.insert(2);
	c.insert(3);
	c.insert(4);
	c.insert(5);
	c.insert(6);
	c.insert(7);
	c.insert(8);
	c.insert(9);
	c.insert(10);
	c.deleele();
	c.deleele();
	c.deleele();
	c.display();

}
