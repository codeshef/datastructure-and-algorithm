
/*Given a number N the task is to find an optimal solution to reach N from 0 using 2 operations ie
1. Double the number 
2. Add one to the number*/


#include<iostream>
using namespace std;


int countMin(int n){

  if(n ==0)
  return 0;

  else if(n%2 ==0)
  
   return (1+countMin(n/2));

  else

   return (1+countMin(n-1));


}

int main(){

     int t;
     cin>>t;

     while(t--){

       int n;
        cin>>n;

        cout<<countMin(n)<<endl;


     }





}
