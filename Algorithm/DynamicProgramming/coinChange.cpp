#include<bits/stdc++.h>
using namespace std;


int count(int s[],int m,int n){

    int t[m+1][n+1],x,i,j;

   for(i=1;i<=m;i++)
      t[i][0]=1;

    for(i=1;i<=n;i++)
        t[0][i]=0;

   for(i=1;i<=m;i++){

     for(j=1;j<n+1;j++){

        if(j>=s[i-1]){

         t[i][j]=t[i-1][j]+t[i][j-s[i-1]];

          }else{


            t[i][j]=t[i-1][j];
           }

      }

  }
  return t[m][n];

}
int main(){

   int arr[]={1,2,3};
   int m=sizeof(arr)/sizeof(arr[0]);
   int n=4;
  cout<<count(arr,m,n)<<endl;

 return 0;
}
