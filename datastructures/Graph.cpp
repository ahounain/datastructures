#include <iostream>
#include "Graph.h"

using namespace std;
Graph::Graph() : V(0), E(0) {}
Graph::Graph(int vertices) :
	V(vertices), E(0), adjList(vertices) {}
	
void Graph::addEdge(int v, int w) {
	adjList[v].push_back(w);
	adjList[w].push_back(v);
	E++;
}
void Graph::readEdges(const string& filename) {
	ifstream file(filename);

	if (!file.is_open()) {
		cout << "Error opening file" << endl;
		return;
	}
	file >> V >> E;
	adjList.resize(V);
	int v, w;
	for (int i = 0; i < E; i++) {
		file >> v >> w;
		addEdge(v, w);
	}

	
}
const vector<int>& Graph::getAdj(int v) {
	return adjList[v];
}
void Graph::toString() const {
	for (int i = 0; i < V; i++) {
		cout << i << ": ";
		for (int j : adjList[i]) {
			cout << j << " ";
		}
		cout << endl;
	}
}

