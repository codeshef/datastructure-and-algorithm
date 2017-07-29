// Largest sum contiguous Subarray

#include<iostream>
using namespace std;

int max_sum_array(int a[],int n){
	
	int max_so_far = INT_MIN, max_ending = 0;
	
	for(int i=0;i<n;i++){
		
		max_ending = max_ending+a[i];
		
		if (max_so_far < max_ending)
            max_so_far = max_ending;
		
		if(max_ending < 0)
		 max_ending = 0;
		
		
	}
	
	return max_so_far;
	
}


int main(){
	
	int a[] ={-2, -3, 4, -1, -2, 1, 5, -3};
	int n = sizeof(a)/sizeof(a[0]);
	int max_sum = max_sum_array(a,n);
	cout<<"Maximum Sum : "<<max_sum<<endl;
	return 0;
	
}
