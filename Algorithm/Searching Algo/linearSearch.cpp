// searching algo (Linear search)

#include<iostream>
using namespace std;

void linearSearch(int a[],int n,int x){
	
	for(int i=0;i<n;i++){
		
		if(a[i] == x){
			
			cout<<"Search successful"<<endl;
			
			break;
			
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
	
	linearSearch(a,n,x);
}
// Time complexity o(n);

