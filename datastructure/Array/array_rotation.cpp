// rotation  of array

#include<iostream>
using namespace std;

int rotate(int a[],int d,int n){
	
	 int r[n];
	 for(int i=0;i<n;i++ ){
	 	
	 	  int j=(i+n-d)%n;
	 	  r[j] = a[i];
	
	 }
	 for(int i=0;i<n;i++)
	  cout<<r[i]<<" ";
}

int main(){
	
	    int n,d;
	    cin>>n>>d;
	    
	    int a[n];
	    for(int i=0;i<n;i++)
	     cin>>a[i];
	     
	     rotate(a,d,n);
	    
	    
}
