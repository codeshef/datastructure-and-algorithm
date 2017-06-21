//cpp program for Memorized version of nth Fibonacci number

/* Memoization : The memoized program for a problem is similar to the recursive 
   version with a small modification that it looks into a lookup table before 
   computing solutions*/
 
#include<iostream>
#define MAX 100
#define NIL -1
using namespace std;
int lookup[MAX];
void initialize(){
	int i;
	for(i=0;i<MAX;i++){
		lookup[i]=NIL;
	}
}
// function for nth Fibonaaci number

int fib(int n){
	if(lookup[n]==NIL){
		if(n<=1)
		lookup[n] =n;
		else
		lookup[n] =fib(n-1)+fib(n-2);
		}
		return lookup[n];
	}
	
// main function
int main(){
	int n=5;
	initialize();
	cout<<fib(n)<<endl;
	return 0;
}

 
