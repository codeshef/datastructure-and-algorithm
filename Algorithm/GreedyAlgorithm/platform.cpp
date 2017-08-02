/*Given arrival and departure times of all trains that reach a railway station, find the minimum number of platforms required for the railway station so that no train waits.
We are given two arrays which represent arrival and departure times of trains that stop*/


#include<iostream>
#include<algorithm>
using namespace std;

int findPlatform(int arr[],int dep[],int n){

  sort(arr,arr+n);
  sort(dep,dep+n);

  int plat_needed = 1,result = 1;
  int i=1,j=0;

  while(i<n && j<n){

    if(arr[i] < dep[j]){

      plat_needed++;
      i++;

      if(plat_needed > result){

       result = plat_needed;

      }

    }else{

      plat_needed--;
      j++;



    }


  }

  return result;


}

int main(){

   int arr[] = {900,940,950,1100,1500,1800};
   int dep[] = {910,1200,1120,1130,1900,2000};

   int n = sizeof(arr)/sizeof(arr[0]);

  cout<<"MInimum number of platforms required :   "<<findPlatform(arr,dep,n)<<endl;

 return 0;


}
