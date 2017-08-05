

// Program to print BFS traversal from a given source vertex. BFS(int s) 
// traverses vertices reachable from s.


#include<iostream>
#include<list>

using namespace std;

class Graph{

        int V; //no. of vertices
        list<int> *adj; // pointer to array containing adjacency list

        public:

        Graph(int V);
        void addEdge(int v,int w);
        void BFS(int s);

};

Graph::Graph(int V){
 
    this->V =V;
    adj = new list<int>[V];

}

void Graph :: addEdge(int v,int w){

  adj[v].push_back(w); // Add w to v'slist.

}


void Graph :: BFS(int s){

  // Mark all the visited vertices as not visited

    bool*visited = new bool[V];
     
    for(int i=0;i<V;i++)
     
     visited[i]= false;

    // create a queue for BFS

       list<int> queue;

    //Mark vertex 2 visited

     visited[s] = true;
    
     queue.push_back(s);

     // iterator

    list<int> :: iterator i;

    while(!queue.empty()){

      // Dequeue a vertex from queue and print it

       s = queue.front();

       cout<<s<<" ";

       queue.pop_front();


      // Get all adjacent vertices of the dequeued vertex s
   // if a adjacent has not been visited , then mark it visited and enqueue it


   for(i = adj[s].begin(); i!=adj[s].end();i++){

            if(!visited[*i]){

                  visited[*i] = true;
                 
                   queue.push_back(*i);


                 }

        }

        



     }

   




}

int main(){

   // create a graph with 4 vertices

     Graph g(4);

      g.addEdge(0,1);
      g.addEdge(0,2);
      g.addEdge(1,2);
      g.addEdge(2,0);
      g.addEdge(2,3);
      g.addEdge(3,3);

      cout<<"Breadth First Traversal "<<endl;
    
       g.BFS(2);

       return 0;



}


