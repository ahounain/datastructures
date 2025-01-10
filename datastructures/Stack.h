#ifndef STACK_H
#define STACK_H
using namespace std;
#include <vector>

class Stack {
private:
	vector<int> vec;
public:
	Stack() {}
	void push(int value);
	int pop();
	bool isEmpty();
};

#endif