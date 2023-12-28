#include <iostream>
#include "bst.h"
#include  "linked_list.h"

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

	LinkedList list;
	list.add(24);
	list.add(55);
	list.add(66);
	list.print();

	std::cout << "------"<< std::endl;
	list.remove(55);
	list.print();

	list.remove(66);

	std::cout << "------"<< std::endl;
	list.print();

	list.remove(24);

	std::cout << "------"<< std::endl;
	list.print();
	list.add(555);
	list.add(245);
	list.add(122);
	list.print();
	std::cout << "------"<< std::endl;
	list.remove(122);
	list.print();




	return 0;
}
