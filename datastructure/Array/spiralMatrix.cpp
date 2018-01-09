// spiral  formation

#include<bits/stdc++.h>
using namespace std;

int main(){
	
	
	     int n,m;
	     
	     cin>>n>>m;
	     
	     int a[n+1][m+1];
	     
	     for(int i=0;i<n;i++){
	     	
	     	for(int j=0;j<m;j++){
	     		
	     		  cin>>a[i][j];
	     		  //cout<<a[i][j]<<" ";
			 }
			// cout<<endl;
		 }
		 
		 int row=0,col=0;
		 
		 while((row < n && col < m)  ){
		 
		 // print spiral
		 
		 for(int j=col;j<m;j++){
		 
		 cout<<a[row][j]<<" ";
		 }
		    row++;
		    
         	
		 
		 for(int i=row;i<n;i++){
		 
		  cout<<a[i][m-1]<<" ";
		  }
		  m--;
      	
      	
      	for(int i=m-1 ;i>=col;i--){
      		
      		cout<<a[n-1][i]<<" ";
		  }
      		n--;
      	
		  
		  
	   for(int i=n-1;i>=row;i--){
	   	     cout<<a[i][col]<<" ";
	   	 }
	   	     
	   	     col++;
	   
		   
}

}
