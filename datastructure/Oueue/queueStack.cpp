

// implement queue using two stacks

#include<iostream>
using namespace std;

struct node{
  
     int data;
     node*next;

};

// function to push iten into stack

 void push(struct node**top_ref ,int newdata);

// function to pop an item

int pop(struct node**top_ref);


struct queue{

     struct node*stack1;
     struct node*stack2;
  };

// function to enqueue an item into queue

void enQueue(struct queue*q,int x){

    push(&q->stack1,x);


}

// function to dequeue an item from queue

int deQueue(struct queue*q){


    int x;

    if(q->stack1 == NULL && q->stack2 == NULL){
        
          cout<<"Queue is empty"<<endl;

      }

     if(q->stack2 == NULL){

        while(q->stack1!=NULL){

            x = pop(&q->stack1);

            push(&q->stack2,x);

         }       

          }

           x = pop(&q->stack2);
           return x;

}

// function to push an item into stack

void push(struct node**top_ref,int data){


         struct node*newnode = new node();

          if(newnode == NULL){

             cout<<"Stack Overflow"<<endl;
            }

         newnode->data = data;

         newnode->next = (*top_ref);

         (*top_ref) = newnode;

           


}

int pop(struct node**top_ref){

    int res;
    struct node *top;

     if(*top_ref == NULL){

        cout<<"Stack Overflow"<<endl;
       }else{

         top = *top_ref;
         res = top->data;
         *top_ref = top->next;
         delete(top);
         return res;
        }

}

int main(){

     /* Create a queue with items 1 2 3*/
    struct queue *q = new queue();
    q->stack1 = NULL;
    q->stack2 = NULL;
    enQueue(q, 1);
    enQueue(q, 2);
    enQueue(q, 3);

    cout<<deQueue(q)<<endl;
    cout<<deQueue(q)<<endl;
    cout<<deQueue(q)<<endl;


     return 0;
}
