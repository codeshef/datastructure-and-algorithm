

#include<iostream>
using namespace std;

int equillibrium(int a[],int n){

     int sum =0;
     int left_sum=0;

    for(int i=0;i<n;i++){
    
        sum+=a[i];
     }

   for(int i=0;i<n;i++){

        sum-=a[i];

         if(left_sum == sum)
           return i;

         left_sum+=a[i];

          }

     return -1;

}

int main(){
  
  int arr[] = {-7, 1, 5, 2, -4, 3, 0};
  int arr_size = sizeof(arr)/sizeof(arr[0]);
  cout<<equillibrium(arr,arr_size)<<endl;
  return 0;

}
