#include <iostream>
#include "bst.h"

bool Node::search(int item,int *x) {
	if (value == item) {
		(*x) = value;
		return true;
	} 
	else if (item < value) {
		if (left) {
			return left -> search(item, x);
		} else {
			return false;
		}
	} 
	else if (item >= value) {
		if (right) {
			return right -> search(item, x);
		}  else {
			return false;
		}
	}
	return false;
}

void Node::print() {
	printf("%d \n", value);
	if (left) {
	left -> print();
	}
	if (right) {
		right -> print();
	}
}

void Node::insert(int item) {
	if (item < value) {
		if (!left) {
			left = new Node();
			left -> value = item;
		} else {
			left -> insert(item);	
		}
	}
	if (item >= value) {
		if (!right) {
			right = new Node();
			right -> value = item;
		} else {
			right -> insert(item);
		}
	}
}


void Tree::print() {
	if (root) {
	root -> print();
	}
}

void Tree::insert(int item) {
	//Insertoin logic here
	if(!root) {
		root = new Node();
		root -> value = item;
} else {
		root->insert(item);
	}
}

int Tree::search(int item) {
	int x = 0;
	if (root) {
		root -> search(item, &x);
	}
	return x;
}
