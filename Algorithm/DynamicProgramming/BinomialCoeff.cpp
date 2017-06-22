// Dynamic Programming problem2 : Binomial-Coefficient
/*Write a function that takes two parameters n and k and returns the value of Binomial Coefficient C(n, k). 
For example, your function should return 6 for n = 4 and k = 2, and it should return 10 for n = 5 and k = 2.*/

#include<bits/stdc++.h>
using namespace std;
int binomialCoeff(int n,int k){
	int c[k+1];
	memset(c,0,sizeof(c));
	c[0]=1; // nc0is 1           
	for(int i=0;i<=n;i++)
	{
		for(int j=min(i,k);j>0;j--)    // C(n, k) = C(n-1, k-1) + C(n-1, k)
                                       //   C(n, 0) = C(n, n) = 1
		c[j] =c[j]+c[j-1];
	}
	return c[k];
}
int main(){
	
	int n=5,k=2;
	cout<<binomialCoeff(n,k)<<endl;
	
}
