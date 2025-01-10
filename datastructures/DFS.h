// C++ Program to implement DFS (Depth First Search) using a stack
#ifndef DFS_H
#define DFS_H
#include "Stack.h"
#include <iostream>
#include <unordered_map>
using namespace std;

class DFS {
private:
	Stack stack;
	unordered_map<int, vector<int>> graph; // vertex -> neighbors
	vector<bool> visited;


public:
	DFS() {

	}
	void addEdge() {}

};
#endif