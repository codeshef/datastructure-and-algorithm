// N Queen problem

#include<bits/stdc++.h>
#define N 4
using namespace std;

bool isSafe(int b[N][N],int row,int col){
	
	int i,j;
	
	/*check  this row on left side*/
	
	for(i=0;i<col;i++){
		if(b[row][i])
		return false;
	}
	
	/*check upper diagonal on left side*/
	for(i=row,j=col;i>=0 && j>=0;i--,j--){
		
		if(b[i][j])
		return false;
		
	}
	
	/* check lower diagonal on left side*/
	
	for(i=row,j=col;j>=0 && i<N;i++,j--){
		
		if(b[i][j])
		return false;
	}
	
	
	return true;
	
}
void printSolution(int b[N][N]){
	
	for(int i=0;i<N;i++){
		
		for(int j=0;j<N;j++){
			
			cout<<b[i][j]<<" ";
		}
		cout<<endl;
	}
}

bool solve(int b[N][N] ,int col){
	
	// if all the queens are placed
	
	   if(col>=N)
    	return true;
    	
    	// consider this column and try placing
    	// this queen in all rows 1 by 1
    	for(int i=0;i<N;i++){
    		
    		if(isSafe(b,i,col)){
    			
    			b[i][col] = 1;
    			
    			if(solve(b,col+1))
    			return true;
    			
    			b[i][col] =0; // backtrack
			}
		}
	
	return false;
}
void Queen(){
	
	int b[N][N];
	
	for(int i=0;i<N;i++){
		
		for(int j=0;j<N;j++){
			
			b[i][j] = 0;
		}
	}
	
	if(solve(b,0)==false){
		
		cout<<"Solution doesn't exist"<<endl;
	}
	
	printSolution(b);
	
	
}
int main(){
	Queen();
	return 0;
}
