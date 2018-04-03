// circular rotation by 1

#include<iostream>
using namespace std;

int rotate(int a[],int n){
	
	 int r[n];
	 for(int i=0;i<n;i++ ){
	 	
	 	  int j=(i+1)%n;
	 	  r[j] = a[i];
	
	 }
	 for(int i=0;i<n;i++)
	  cout<<r[i]<<" ";
}

int main(){
	
	    int n;
	    cin>>n;
	    
	    int a[n];
	    for(int i=0;i<n;i++)
	     cin>>a[i];
	     
	     rotate(a,n);
	    
	    
}
