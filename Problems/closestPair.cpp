//Given a sorted array and a number x, find the pair in array whose sum is closest to x

#include<iostream>
#include<math.h>
using namespace std;

void printClose(int a[],int n,int x){
	
   int diff =INT_MAX;
   int l =0,r=n-1;
   int res_l,res_r;
   
   while(l < r){
   	
   	if(abs(a[l]+a[r]-x) < diff){
   		
   		res_l = l;
   		res_r = r;
   		diff = abs(a[l]+a[r]-x);
	   }
	   
	   if(a[l]+a[r] > x){
	   	
	   	  r--;
	   	}else{
	   		
	   		l++;
		   }
   }
   
   cout<<"Closest Pair : "<<a[res_l]<<"  "<<a[res_r] << endl;
	
}

int main(){
	
	int arr[] = {10,22,28,29,30,40},x=54;
	
	 int n = sizeof(arr)/sizeof(arr[0]);
	 
	 printClose(arr,n,x);
	
}

