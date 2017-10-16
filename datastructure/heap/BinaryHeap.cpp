// implementing binary heap

#include<bits/stdc++.h>
using namespace std;

void swap(int *x,int *y);

class MinHeap{

// pointer to array of elements in heap
    int *ptr;
 // capacity of heap
    int capacity;
 // current no of elements in min heap
     int heap_size;

   public:
 // constructor
   MinHeap(int capacity);
  // return parent
   int parent(int i){return (i-1)/2;}
  // left child of i
   int left(int i){return (2*i+1);}
  // right child of i
  int right(int i){return(2*i+2);}
 // extract the root with minimum element
  int extractMin();
// decrease function
  void decreaseKey(int i,int new_val);
 // returns minimum key
  int getMin(){return ptr[0];}
 // delete key
 void deleteKey(int i);
 // insert key
 void insertKey(int key);
 void MinHeapify(int i);

};

MinHeap::MinHeap(int c){
    
   heap_size=0;
   capacity = c;
   ptr = new int[c];
}
// insert key
void MinHeap::insertKey(int key){

       if(heap_size==capacity){
        cout<<"Overflow"<<endl;
         return;
        }
  
       heap_size++;
       int i= heap_size-1;
       ptr[i]= key;

      // check for violation condition
     while(i!=0 && ptr[parent(i)] > ptr[i]){
        swap(&ptr[i],&ptr[parent(i)]);
         i=parent(i);

       }

}

// decrease key
void MinHeap :: decreaseKey(int i,int new_val){
  
  ptr[i] = new_val;
 while(i!=0 && ptr[parent(i)] > ptr[i]){

    swap(&ptr[i],&ptr[parent(i)]);
    i=parent(i);
  }

}
// method to remove minimum element from minheap

int MinHeap::extractMin(){

      if(heap_size<=0)
        return INT_MAX;
       if(heap_size==1){

          heap_size--;
          return ptr[0];
           }
     int root = ptr[0];
     ptr[0] = ptr[heap_size-1];
     heap_size--;
     MinHeapify(0);
     return root;

}
//delete key
void MinHeap:: deleteKey(int i){

   decreaseKey(i,INT_MIN);
    extractMin();

}

void MinHeap::MinHeapify(int i){

   int l = left(i);
   int r = right(i);
   int smallest=i;

  if (l < heap_size && ptr[l] < ptr[i])
        smallest = l;
    if (r < heap_size && ptr[r] < ptr[smallest])
        smallest = r;
    if (smallest != i)
    {
        swap(&ptr[i], &ptr[smallest]);
        MinHeapify(smallest);
    }
}




// swap
void swap(int *x,int *y){
  
     int temp = *x;
     *x=*y;
     *y=temp;

}

int main(){

   MinHeap h(11);
    h.insertKey(3);
    h.insertKey(2);
    h.deleteKey(1);
    h.insertKey(15);
    h.insertKey(5);
    h.insertKey(4);
    h.insertKey(45);
    cout << h.extractMin() << " ";
    cout << h.getMin() << " ";
    h.decreaseKey(2, 1);
    cout << h.getMin();
    return 0;
}
