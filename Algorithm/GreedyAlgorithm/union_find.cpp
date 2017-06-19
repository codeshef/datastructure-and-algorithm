// union and find algorithm
#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

struct Edge{
	int src,des;
};

struct Graph{
	// v-> Number of vertices
	//e-> Number of edges
	int v,e;
	struct Edge*edge;
};

// create a graph with v vertices and e edges
struct Graph* createGraph(int v, int  e){
	struct Graph* graph = new Graph();
	graph->v =v;
	graph->e =e;
	graph->edge = new Edge();
	return graph;
	
};

// a utility function to find the subsets
int find(int parent[],int i)
{
	  if(parent[i]==-1)
	  return i;
	  return find(parent,parent[i]);
}

// function to check cycle

void isCycle(struct Graph*graph,int v)
{
	int parents[v+1],flag=0;
	memset(parents,-1,sizeof(parents));
	
	for(int i=0;i<graph->e;++i)
	{  int x= find(parents,graph->edge[i].src);
	   int y =find(parents,graph->edge[i].des);
	   
	   if(x!=y)
	    { parents[x]=y;
		}
		else
		{ flag=1;
		  break;
		}
	}
	if(flag)
	{ cout<<"Cycle is present"<<endl;
	}
	else
	{ cout<<"No Cycle"<<endl;
	}
}


int main(){
	
	// create graph
	int v=4,e=4;
	struct Graph*graph = createGraph(v,e);
	graph->edge[0].src =0;
	graph->edge[0].des  =1;
	
	graph->edge[1].src=1;
	graph->edge[1].des=2;
	
		graph->edge[2].src =2;
	graph->edge[2].des  =3;
	
	graph->edge[3].src=3;
	graph->edge[3].des=0;
	
	isCycle(graph,v);
	   
	
}
