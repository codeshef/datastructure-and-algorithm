

#include<iostream>
#include<string.h>

using namespace std;

int max (int x, int y) { 
return (x > y)? x : y; 
}

int palindrome(char *str){

 int n = strlen(str);
   int i, j, cl;
   int L[n][n]; 
   for (i = 0; i < n; i++)
      L[i][i] = 1;
 
   
    for (cl=2; cl<=n; cl++)
    {
        for (i=0; i<n-cl+1; i++)
        {
            j = i+cl-1;
            if (str[i] == str[j] && cl == 2)
               L[i][j] = 2;
            else if (str[i] == str[j])
               L[i][j] = L[i+1][j-1] + 2;
            else
               L[i][j] = max(L[i][j-1], L[i+1][j]);
        }
    }
 
    return L[0][n-1];
}

int main(){

   char seq[] = "GEEKS FOR GEEKS";
   
   cout<<"Length of longest palindrome sequence   "<<" "<<palindrome(seq)<<endl;
  
   return 0;

}
