/*Given a value N, if we want to make change for N cents, and we have infinite supply of each of S = { S1, S2, .. , Sm} valued coins, how many ways can we make the change? The order of coins doesn’t matter.*/


#include<bits/stdc++.h>
#include<algorithm>
using namespace std;


int changeCoin(int s[] , int m ,int n){

   int dp[n+1];

   memset(dp,0,sizeof(dp));


   dp[0] = 1;

   for(int i=0;i<m;i++){
    
    for(int j = s[i];j<=n;j++){

    dp[j]+= dp[j-s[i]];

    }

   }

  return dp[n];



}

int main(){

  int a[] = {1,2};
  int m = sizeof(a)/sizeof(a[0]);
  

  cout<<"Total number of ways "<<changeCoin(a,m,4)<<endl;


}
