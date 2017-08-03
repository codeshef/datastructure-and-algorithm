
// cpp program for Knight Tour Problem


#include<iostream>
#define N 8
using namespace std;



bool isSafe(int x,int y,int k[N][N]){

  return(x>=0 && x<N && y>=0 && y<N && k[x][y]==-1);


}


void printSolution(int sol[N][N]){

  for(int x=0;x<N;x++){

   for(int y=0;y<N;y++){

    cout<<sol[x][y]<<" ";

    }

     cout<<endl;
   }
  
 
}


int solve(int x,int y,int movei,int sol[N][N],int xMove[N],int yMove[N]){

  int next_x,next_y;

  if(movei == N*N)
   return true;

  // Try all moves from current coordinate

  for(int k =0;k<8;k++){

    next_x = x+xMove[k];

    next_y = y+yMove[k];

  
    if(isSafe(next_x,next_y,sol)){

    
      sol[next_x][next_y] = movei;


      if(solve(next_x,next_y,movei+1,sol,xMove,yMove) == true)

      return true;

     else

     sol[next_x][next_y] =-1 ;// backtracking
   
      }

  }

  return false;
  

}

bool solveKT(){

     int k[N][N];

    //Initialize all cells 
   
    for(int i=0;i<N;i++)
    for(int j=0;j<N;j++)
    k[i][j] = -1;

   // define moves of knight

   // xMove -> x axis
   // yMove -> y axis

    int xMove[8] = {2,1,-1,-2,-2,-1,1,2};
    int yMove[8] = {1,2,2,1,-1,-2,-2,-1};

    //Initally knight is at first block

     k[0][0] = 0;

  // Start from (0,0) and explore all the tours

   if(solve(0,0,1,k,xMove,yMove) == false){
   
     cout<<"Solution does not exist"<<endl;
     
      return false;


    }else{


      printSolution(k);
   
       return true;

    }
  





}

int main(){

    solveKT();

    return 0; 

}

