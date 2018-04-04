// Rearrange positive and negative numers with constant extra space

#include<iostream>
using namespace std;

int main(){
	
	
	   int arr[] = {12 ,11,-13,-5,6,-7,5,-3,-6};
	   
	   int n = sizeof(arr)/sizeof(arr[0]);
	   
	   for(int i=1;i<n;i++){
	   	
	   	   int temp = arr[i];
	   	   
	   	   if(temp > 0)
	   	    continue;
	   	    
	   	    int j = i-1;
	   	    
	   	    while(j>=0 && arr[j]>0){
	   	    	  arr[j+1]=arr[j];
	   	    	  j=j-1;
			   }
			   arr[j+1]=temp;
	   }
	   
	   for(int i=0;i<n;i++)
	     cout<<arr[i]<<" ";
}
