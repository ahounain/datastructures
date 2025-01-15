#include <iostream>
#include <vector>
#include "Node.h"
#include "Stack.h"
#include "Graph.h"
#include "DFS.h"
using namespace std;
int main() {
	// node
	Node* head = new Node(10);
	head->next = new Node(20);
	head->prev = new Node(0);
	cout << head->data << endl;

	// stack
	Stack* stack = new Stack;
	stack->push(head->prev->data);
	cout << stack->pop() << endl;

	// graph
	Graph g;

	g.readEdges("graph.txt");
	g.toString();

	DFS dfs(g, 9);
	cout << dfs.getCount() << endl;


	
}