#include<iostream>
using namespace std;
#define Max_SIZE 101
int A[Max_SIZE];
int top=-1;
void push(int x)
{ 
 if(top==Max_SIZE -1)
 {  cout<<"Error : stack overflow"<<endl;
     return;
 }
 A[++top]=x;
   }
   void pop()
   { if(top==-1)
     { cout<<"Error : No element to pop"<<endl;
       return;
	 }
	 top--;
   }
   void print()
   { int i;
     cout<<"Stack : ";
     for(int i=0;i<=top;i++)
     {  cout<<A[i]<<" ";
	 }
	 cout<<endl;
   }
   int main()
   { push(2);
    print();
    push(5);
    print();
    push(10);
    print();
    pop();
    print();
    push(12);
    print();
   }
