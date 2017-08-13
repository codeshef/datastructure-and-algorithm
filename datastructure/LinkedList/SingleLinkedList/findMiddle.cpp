
// finding middle in linked list

#include<iostream>
using namespace std;

struct node{

    int data;
    node*next=NULL;
};

struct node*newnode(struct node**head,int data){


      struct node*temp = new node();
      temp->data = data;
      temp->next =(*head);
      (*head) = temp;
      }

void printMiddle(struct node*head){

   node *slow = head;
   node *fast = head;

   if(head!=NULL){

    while(fast!=NULL && fast->next!=NULL){


           fast = fast->next->next;
           slow =   slow->next;      

     }

    cout<<"The middle element is "<<slow->data<<endl;

   }

}

void printList(node*ptr){



    while(ptr!=NULL){
      
        cout<<ptr->data<<" ";
       ptr=ptr->next;

      }

}

int main(){

         struct node*head = NULL;
          int i;

           for(i=5;i>0;i--){

             
               newnode(&head,i);
               printList(head);
               cout<<endl;
               printMiddle(head);
           
              }

     return 0;

}
