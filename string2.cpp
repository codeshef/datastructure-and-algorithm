
#include<iostream>
#include<string.h>
using namespace std;

bool isSubsequence(char str1[],char str2[],int m,int n){

   int j =0;
   
  for(int i=0;i<n && j<m;i++)
   
      if(str1[j] == str2[i])
        j++;
   
     return(j == m);

}

int main(){

     char str1[] = "AXY";
     char str2[] = "YADXCP";
     int m = strlen(str1);
     int n = strlen(str2);
    isSubsequence(str1,str2,m,n)?cout<<"Yes":cout<<"No";
    return 0;

}

