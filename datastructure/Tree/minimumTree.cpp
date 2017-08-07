
#include<iostream>
using namespace std;

struct node{
   
     int data;
     node*left;
     node*right;

};

struct node*newnode(int data){

   node*newnode = new node();

   newnode->data = data;

   newnode->left = NULL;
  
   newnode->right = NULL;
  
   return(newnode);

}

struct node* insert(struct node*node,int data){
  
    if(node == NULL){

      return(newnode(data));      
  
       }else{

             if(data <= node->data)

              node->left = insert(node->left,data);
              
              else
                 
               node->right = insert(node->right,data);

     }

     return node;

}

int minValue(struct node*node){

    struct node*current = node;

    while(current->left!=NULL){

       current = current->left;
    }

    return(current->data);
}

int main(){

    struct node*root =NULL;

    root = insert(root,4);
   
    insert(root,2);
    insert(root,1);
    insert(root,3);
    insert(root,6);
    insert(root,5);

  cout<<"Minimum value in BST "<<minValue(root)<<endl;

   return 0;


}
