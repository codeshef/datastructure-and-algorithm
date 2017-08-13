

// finding depth of binary tree

#include<iostream>
using namespace std;

struct node{

       int data;
       node*left;
       node*right;

};

struct node*newnode(int data){

     node*temp = new node();
     temp->data = data;
     temp->left = NULL;
     temp->right = NULL;
     return(temp);

}


int maxDepth(struct node*node){

    if(node==NULL)
     return 0;
   else{

     int lDepth = maxDepth(node->left);
     int rDepth = maxDepth(node->right);

        if(lDepth > rDepth)
          return(lDepth+1);
        else
         
          return(rDepth+1);

         }


}
int main(){

     struct node*root = new node();
      root->left = newnode(2);
      root->right = newnode(3);
      root->left->left = newnode(4);
      root->left->right = newnode(5);

       cout<<"Height of tree : "<<maxDepth(root)<<endl;
   return 0;
}
