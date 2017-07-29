#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Edge{
	
	int src,dest;
	
};

struct Graph{
	
	int V,E;
	struct Edge*edge;
	
};

// create graph
struct Graph*createGraph(int V,int E){
	
	struct Graph*graph = (struct Graph*)malloc(sizeof(struct Graph));
	graph->V = V;
	graph->E = E;
	graph->edge = (struct Edge*) malloc(graph->E*sizeof(struct Edge));
	
	return graph;
	
}

// find function
int find(int parent[],int i){
	
	if(parent[i]==-1)
	 return i;
	 
	 return find(parent,parent[i]);
}

//union function

void Union(int parent[], int x, int y)
{
    int xset = find(parent, x);
    int yset = find(parent, y);
    parent[xset] = yset;
}
 

// function to check whether cycle is formed or not

int isCycle( struct Graph* graph )
{
    // Allocate memory for creating V subsets
    int *parent = (int*) malloc( graph->V * sizeof(int) );
    int i;
 
    // Initialize all subsets as single element sets
    memset(parent, -1, sizeof(int) * graph->V);
 
    // Iterate through all edges of graph, find subset of both
    // vertices of every edge, if both subsets are same, then 
    // there is cycle in graph.
    for(i = 0; i < graph->E; ++i)
    {
        int x = find(parent, graph->edge[i].src);
        int y = find(parent, graph->edge[i].dest);
 
        if (x == y)
            return 1;
 
        Union(parent, x, y);
    }
    return 0;
}

int main(){
	
	int V=3,E=3;
	struct Graph*graph = createGraph(V,E);
	
	// add edge 0-1
    graph->edge[0].src = 0;
    graph->edge[0].dest = 1;
 
    // add edge 1-2
    graph->edge[1].src = 1;
    graph->edge[1].dest = 2;
 
    // add edge 0-2
    graph->edge[2].src = 0;
    graph->edge[2].dest = 2;
    
     if (isCycle(graph))
        printf( "graph contains cycle" );
    else
        printf( "graph doesn't contain cycle" );
 
    return 0;
	
}
