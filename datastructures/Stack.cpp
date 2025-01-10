// datastructures.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <vector>

#include "Stack.h"

using namespace std;

void Stack::push(int value) {
	vec.push_back(value);

}
int Stack::pop() {
	if (isEmpty()) {
		cout << "Stack is empty, can't pop" << endl;
		return -1;
	}

int last_element = vec.back();
vec.pop_back();
return last_element;

}
bool Stack::isEmpty() {
	return vec.empty();
}




