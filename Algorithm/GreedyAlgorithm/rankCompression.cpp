// union_find algorithm (union by rank and path compression)


#include<iostream>
using namespace std;

struct Edge{
     int src,dest;
};
struct Graph{
  
      int v,e;
      struct Edge*edge;
};

struct subset{

        int parent;
        int rank;
};

struct Graph*createGraph(int v,int e){

     struct Graph*graph = new Graph();
      graph->v = v;
      graph->e = e;
      graph->edge = new Edge();
      return graph;
}   


int find(struct subset subsets[],int i){

      if(subsets[i].parent!=i)
       subsets[i].parent = find(subsets,subsets[i].parent);
     return subsets[i].parent;

}

void Union(struct subset subsets[],int x,int y){

               int xroot = find(subsets,x);
               int yroot = find(subsets,y);

   // attach smaller rank tree under root of high rank

   if(subsets[xroot].rank < subsets[yroot].rank)
     subsets[xroot].parent = yroot;
  else if(subsets[xroot].rank > subsets[yroot].rank)
     subsets[yroot].parent = xroot;
  else{

         subsets[yroot].parent = xroot;
         subsets[xroot].rank++;
   }
}
int isCycle(struct Graph*graph){

    int v = graph->v;
    int e =graph->e;

    struct subset*subsets = new subset();

    for(int i=0;i<v;i++){

      subsets[i].parent = i;
      subsets[i].rank=0;
       }

    for(int i=0;i<e;i++){

        int x = find(subsets,graph->edge[i].src);
        int y = find(subsets,graph->edge[i].dest);
           if(x==y)
           return 1;
         Union(subsets,x,y);

        }
      return 0;

}


int main(){
    int v=3,e=3;
    struct Graph*graph = createGraph(v,e);
    
    // add edge 0-1
    graph->edge[0].src=0;
    graph->edge[0].dest=1;
   // add edge 1-2
     graph->edge[1].src=1;
     graph->edge[1].dest=2;
  // add edge 0-2
    graph->edge[2].src=0;
    graph->edge[2].dest=2;

    if(isCycle(graph))
     cout<<"Graph contains cycle"<<endl;
   else
   cout<<"Graph does not contain cycle"<<endl;
   return 0;
}
