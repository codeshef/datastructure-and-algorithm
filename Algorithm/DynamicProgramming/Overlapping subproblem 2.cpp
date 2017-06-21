// The Tabulated version of the nth Fibonacci Number


/*Tabulated: the tabulated program builds a table in bottom up fashion 
and returns the last entry from table*/

#include<iostream>
using namespace std;

int fib(int n){
	
	int f[n+1];
	 int i;
	 f[0]=0,f[1]=1;
	 for(i=2;i<=n;i++){
	 	
		 f[i]=f[i-1]+f[i-2];
	 }
	 return f[n];
}

int main(){
	
	int n=5;
	cout<<fib(n)<<endl;
	return 0;
}
