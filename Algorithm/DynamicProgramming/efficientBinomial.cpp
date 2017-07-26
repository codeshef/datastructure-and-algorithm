// Binomial coefficent with time Complexity O(k) and space complexity O(1)

#include<iostream>
using namespace std;

void BinomialCoefficient(int n,int r){
	
	int res=1;
	
	if(r > n-r){
		r = n-r;
	}
	
	for(int i=0;i<r;i++){
		
		res*=(n-i);
		res/= (i+1);
	}
	
	cout<<"Binomial Coefficient of "<<n<<"c"<<r<<" is equal to "<<res<<endl;
}

int main(){
	
	int n=5,r = 2;
	BinomialCoefficient(n,r);
	return 0;
}
