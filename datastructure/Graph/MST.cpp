// prim's algo to find minimum spanning tree

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define INF 100000008;

typedef struct{

     int tonode;
     int weight;
}Edge;

class Graph{
  
       int v;
       list<Edge>*adj;
       
        public:

         Graph(int v);
         void addEdge(int v,int w,int wt);
         void printGraph(int v);

};

Graph::Graph(int v){

     this->v=v;
     adj = new list<Edge>[v];
}

void Graph:: addEdge(int v,int w,int wt){

     Edge edge;
     edge.tonode=w;
     edge.weight=wt;

     adj[v].push_back(edge);
     edge.tonode=v;
     adj[w].push_back(edge);
}

void Graph::printGraph(int V){

    list<Edge>::iterator it;
   
   for(int u=0;u<V;u++){

       cout<<"Node "<<u<<" makes an edge with"<<endl;

    for(it=adj[u].begin();it!=adj[u].end();it++){

          int v =it->tonode;
          int w = it->weight;
        cout<<"Node "<<v<<" with weight "<<w<<endl;

       }

    }

}


int main(){

     int v=9;
    // create graph
     Graph g(v);
    g.addEdge(0, 1, 4);
    g.addEdge(0, 7, 8);
    g.addEdge(1, 2, 8);
    g.addEdge(1, 7, 11);
    g.addEdge(2, 3, 7);
    g.addEdge(2, 8, 2);
    g.addEdge(2, 5, 4);
    g.addEdge(3, 4, 9);
    g.addEdge(3, 5, 14);
    g.addEdge(4, 5, 10);
    g.addEdge(5, 6, 2);
    g.addEdge(6, 7, 1);
    g.addEdge(6, 8, 6);
    g.addEdge(7, 8, 7);
    g.printGraph(v);
    return 0;
}
