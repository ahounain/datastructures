#pragma once

#include "Graph.h"


using namespace std;
class DepthFirstPaths
{
private:
	vector<bool> marked; // has dfs() been called?
	vector<int> edgeTo; // last vertex on known path to vertex
	const int s; // source


public:
	DepthFirstPaths(Graph& G, int s);
	bool hasPathTo(int v);
	vector<int> pathTo(int v);
	void DFS(Graph& G, int v);
	


};