// sudoku
#include<iostream>
using namespace std;


bool isSafe(int grid[N][N],int row,int col,int num){
	
	
	return !UsedInRow(grid,row,num) && !UsedInCol(grid,col,num) && !UsedInBox(grid,row-row%3,col-col%3,num);

}

bool UsedInRow(int grid[N][N],int row,int num){
	
	for(int col=0;col<N,col++)
	if(grid[row][col]==num)
	   return true;
	return false;
}

bool UsedInCol(int grid[N][N],int col,int num){
	
	for(int row=0;row<N,row++)
	if(grid[row][col]==num)
	   return true;
	return false;
}

bool UsedInBox(int grid[N][N],int boxStartRow,int boxStartCol,int num ){
	
	
	for(int row=0;row<3;row++){
		
		for(int col=0;col<3;col++){
			
			if(grid[row+boxStartRow][col+boxStartCol] == num)
			   return true;
		   return false;
		}
	}
}

bool FindUnassignedLocation(int grid[N][N], int &row,int &col){
	
	
	for(row=0;row<N;row++){
		
		for(col=0;col<N;col++){
			
			
			if(grid[row][col] == UNASSIGNED)
			  return true;
			return false;
		
		}
	}
}
bool SolveSudoku(int grid[N][N]){
	
	int row,col;
	//  searching empty places
	
	if(!FindUnassignedLocation(grid,row,col))
	return true; // success puzzle completed
	
	// consider digit 1 to 9
	
	for(int num=1;num<=9;num++){
		
		if(isSafe(grid,row,col,num)){
			
			grid[row][col] = num;
			
			if(SoveSudoku(grid))
			 return true;
		  grid[row][col] = UNASSIGNED;
		}
	}
	return false;
}
void printGrid(int grid[N][N]){
	
	for(int row=0;row<N;row++){
		
		for(int col=0;col<N;col++){
			
			cout<<grid[row][col];
		}
		
		cout<<endl;
	}
}
int main(){
	
	int grid[N][N] = {{3, 0, 6, 5, 0, 8, 4, 0, 0},
                      {5, 2, 0, 0, 0, 0, 0, 0, 0},
                      {0, 8, 7, 0, 0, 0, 0, 3, 1},
                      {0, 0, 3, 0, 1, 0, 0, 8, 0},
                      {9, 0, 0, 8, 6, 3, 0, 0, 5},
                      {0, 5, 0, 0, 9, 0, 6, 0, 0},
                      {1, 3, 0, 0, 0, 0, 2, 5, 0},
                      {0, 0, 0, 0, 0, 0, 0, 7, 4},
                      {0, 0, 5, 2, 0, 6, 3, 0, 0}};
      if(SolveSudoku(grid) == true)
      printGrid(grid);
      else
      cout<<"No solution exist"<<endl;
      return 0;
}
