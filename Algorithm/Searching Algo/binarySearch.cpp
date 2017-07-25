// Binary Search

#include<iostream>
#include<algorithm>
using namespace std;

void binarySearch(int a[],int l,int r,int x){
	
	if(r>=l){
		
		int mid=(l+r)/2;
		
		if(x == a[mid]){
			
			cout<<"Search Successful"<<endl;
			
		}else if(x < a[mid]){
			
			binarySearch(a,l,mid-1,x);
			
		}else if( x > a[mid]){
			
			binarySearch(a,mid+1,r,x);
		}
		
	}
}
int main(){
		int n,x;
	cout<<"Number of elements in an array"<<endl;
	cin>>n;
	int a[n];
	cout<<"Enter elements of an array"<<endl;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	cout<<"Enter the element you want to search"<<endl;
	cin>>x;
	
	// binary search is for sorting array
	sort(a,a+n);
	
	// binary search function
	binarySearch(a,0,n-1,x);
}

// Time complexity o(log(n))
