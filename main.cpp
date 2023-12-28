#include <iostream>
#include "bst.h"

int main() {
	Tree tree;
	tree.insert(10);
	tree.insert(29);
	tree.insert(30);
	tree.insert(3);
	tree.insert(69);
	tree.insert(1);
	tree.insert(4);
	tree.print();

	int test = tree.search(29);
	int test2 = tree.search(55);
	int test3 = tree.search(1);
	int test4 = tree.search(124214);

	//Should return 29
	printf("Test 1: %d \n", test);
	//Should return 0
	printf("Test 2: %d \n", test2);
	//Should return 1
	printf("Test 3: %d \n", test3);
	//Should return 0
	printf("Test 4: %d \n", test4);

	return 0;
}
