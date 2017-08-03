
#include<iostream>
using namespace std;


 int lis(int a[],int n){

   int l[n];
  
   for(int i=0;i<n;i++)
    l[i] =1;

    for(int i=1;i<n;i++){

    for(int j=0;j<i;j++){

      
       if(a[i] > a[j] && l[i]<l[j]+1)

          l[i] = l[j]+1;

      }

   }

   int max=l[0];

   for(int i=1;i<n;i++){
      
       if(max < l[i])
       
         max = l[i];
     }

      return max;


   



   }



int main(){

    int t;
    cin>>t;

    int n;

   while(t--){
    
  
     cin>>n;

     int a[n];

     
    for(int i=0;i<n;i++){
      
        cin>>a[i];

      }

   cout<<n-lis(a,n)<<endl;

    }

    return 0;
   
}
