// program for array rotation using juggling algorithm
#include<iostream>
using namespace std;

int gcd(int a,int b){
	
	if(b == 0){
		
		return a;
		}else{
			gcd(b,a%b);
		}
		
}


void rotate(int a[],int d,int n){
	
	int i,j,k,temp;
	
	for(i=0;i<gcd(d,n);i++){
		
		temp =a[i];
		j =i;
		
		while(1){
			
			k = j+d;
			if(k>=n){
				k =k-n;
			}
			if(k ==i)
			break;
			a[j] = a[k];
			j=k;
		}
		
		a[j]=temp;
		
		
	}
	
}

void printArray(int a[],int n){
	
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}

int main(){
	
   int a[]={1,2,3,4,5,6,7};
   rotate(a,2,7);
   printArray(a,7);
	
}

