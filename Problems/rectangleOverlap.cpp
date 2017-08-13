
// check whether two rectangles overlap or not

#include<bits/stdc++.h>

using namespace std;

struct points{
  
   int x,y;

};


bool overlap(points l1,points r1,points l2,points r2){

  // if one is on left of other

    if(l1.x > r2.x || l2.x> r1.x)
    
     return false;

  // if one is above other

   if(l1.y < r2.y || l2.y < r1.y)

     return false; 


     return true;

}


int main(){

     points l1 = {0, 10}, r1 = {10, 0};
     points l2 = {5, 5}, r2 = {15, 0};

      
         if(overlap(l1,r1,l2,r2))

           cout<<"Rectangles Overlap"<<endl;
            
          else
           
           cout<<"Rectangles don't overlap"<<endl;

           return 0;
}
