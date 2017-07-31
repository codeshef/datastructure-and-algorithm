
#include<iostream>
using namespace std;

bool isLucky(int n){


   static int counter = 2;
   
    int next_position = n;
  
   if(counter >n)
    return 1;
   if(n%counter ==0)
    return 0;

   // next position
  
    next_position-=next_position/counter;
    
    counter++;
   
    return isLucky(next_position);
    
}

int main(){

      int x;
      
     cout<<"Enter your number"<<endl;
     cin>>x;
    
     if(isLucky(x)){

      cout<<x<<" is lucky number"<<endl;
       }else{

       cout<<x<<" is not lucky number"<<endl;

      }


  }

