#ifndef NODE_H
#define NODE_H

#include <iostream>
#include <vector>

class Node {
public:
	int data;
	Node* next;
	Node* prev;
	Node(int value) :
		data(value), next(nullptr), prev(nullptr) {
	}
};

#endif