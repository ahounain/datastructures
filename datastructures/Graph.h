#ifndef GRAPH_H
#define GRAPH_H
#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

class Graph {
private:
	int V;
	int E;
	vector<vector<int>> adjList;

public:
	Graph();
	Graph(int vertices);
	void addEdge(int v, int w);
	void readEdges(const string& filename);
	const vector<int>& getAdj(int v);
	void toString() const;
};

#endif
