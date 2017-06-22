/* Given 3 numbers {1, 3, 5}, we need to tell
the total number of ways we can form a number 'N' 
using the sum of the given three numbers.
(allowing repetitions and different arrangements).*/


#include<iostream>
using namespace std;

int ans(int n){
	if(n<0)
	return 0;
	if(n==0)
	return 1;
	return ans(n-1)+ans(n-3)+ans(n-5);
}

int main(){
	  
	   int N;
	   cin>>N;
	  cout<< ans(N)<<endl;
}
