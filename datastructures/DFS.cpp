// C++ Program to implement DFS (Depth First Search) using a stack
#include "DFS.h"
#include <iostream>
#include "Graph.h"
using namespace std;

DFS::DFS(Graph& G, int s) :
 visited(G.getV()), count(0){
	depthFirstSearch(G, s);
}

void DFS::depthFirstSearch(Graph& G, int v) {
	visited[v] = true;
	count++;
	for (int w : G.getAdj(v)) {
		if (!visited[w]) {
			depthFirstSearch(G, w);
		};
	}
}
bool DFS::marked(int w) const {
	return visited[w];
}
int DFS::getCount() const {
	return count;
}



