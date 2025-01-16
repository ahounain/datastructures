#include "DepthFirstPaths.h"
#include "Graph.h"
#include "Stack.h"
using namespace std;


DepthFirstPaths::DepthFirstPaths(Graph& G, int s) :
	marked(G.getV()), edgeTo(G.getV()), s(s) {
	DFS(G, s);
}
void DepthFirstPaths::DFS(Graph& G, int v) {
	// we just visited this vertex,
	marked[v] = true;
	// lets check all the adjacent vertices of v
	for (int w : G.getAdj(v)) {
		// if we havent visited
		if (!marked[w]) {
			// we record a path exists
			// from v -> w 
			edgeTo[w] = v;
			// call DFS recursively
			DFS(G, w);
		}
	}
}
bool DepthFirstPaths::hasPathTo(int v) {
	return marked[v];
}
vector<int> DepthFirstPaths::pathTo(int v) {
	if (!hasPathTo(v)) {
		return vector<int>(); // empty vector
	}
	Stack pathStack;
	for (int i = v; i != s; i = edgeTo[v]) {
		pathStack.push(i);
	}
	pathStack.push(s);
	// its redundant i know,
	// but I wanted to use my stack lol
	vector<int> path;
	while (!pathStack.isEmpty()) {
		path.push_back(pathStack.pop());
	}
	return path;
}
