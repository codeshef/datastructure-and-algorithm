
#include<bits/stdc++.h>
using namespace std;


int findSum(int n){
	
	if (n<10)
      return n*(n+1)/2;
 
    // d = number of digits minus one in n. For 328, d is 2
    int d = log10(n);
 
    int *a = new int[d+1];
    a[0] = 0, a[1] = 45;
    for (int i=2; i<=d; i++)
        a[i] = a[i-1]*10 + 45*ceil(pow(10,i-1));
 
    // computing 10^d
    int p = ceil(pow(10, d));
 
    // Most significant digit (msd) of n,
    // For 328, msd is 3 which can be obtained using 328/100
    int msd = n/p;
    return msd*a[d] + (msd*(msd-1)/2)*p +  
           msd*(1+n%p) + findSum(n%p);
	
	
	

}


int main(){
	
	int n= 328;
	cout<<"Sum of digits in number from 1 to "<<n <<"  "<<findSum(n)<<endl;
	return 0;
	
}
