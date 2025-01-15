// C++ Program to implement DFS (Depth First Search) using a stack
#ifndef DFS_H
#define DFS_H
#include "Graph.h"
#include <iostream>

using namespace std;

class DFS {
private:
	vector<bool> visited; // vertex -> neighbors
	int count;
	void depthFirstSearch(Graph& G, int v);

public:
	DFS(Graph& G, int s);
	bool marked(int w) const;
	int getCount() const;
};
#endif