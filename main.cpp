#include <iostream>
#include "bst.h"
#include  "linked_list.h"

// Making a min HEAP
struct Heap {
	int arr[10] = {0};	
	int amountOfNodes = 0;
	void bubble(int currentIndex);
	void bubbleDown();
	void insert(int item);
	int pop();
	void print();
};

void Heap::insert(int item) {

	// CHILDREN :
	// 2i + 1
	// 2i + 2
	//
	// PARENT
	// |(i-1)/2|
	if (amountOfNodes < 10) {
		arr[amountOfNodes] = item;
		bubble(amountOfNodes);
		amountOfNodes++;

	}
}

int Heap::pop() {
	int value = arr[0];
	arr[0] = arr[amountOfNodes-1];	
	arr[amountOfNodes-1] = 0;
	amountOfNodes--;
	bubbleDown();
	return value;
}

void Heap::print() {
	printf("amount of nodes is: %d \n", amountOfNodes);
	for (int i = 0; i <= amountOfNodes-1; i++) {
		std::cout << arr[i] << std::endl;
	}
}

void Heap::bubble(int currentIndex) {
	//CHECK LEFT AND RIGHT AND SWAP WITH THE SMALLER ONE
	//
	//Check if parent is smaller
	int parentIndex = (currentIndex-1)/2;
	int index = currentIndex;
	while(true) {
		if (arr[parentIndex] > arr[index]){
			int temp;
			temp = arr[index];
			arr[index] = arr[parentIndex];
			arr[parentIndex] = temp;
			index = parentIndex;
			parentIndex = (index-1)/2;
		} else {
			break;
		}
	}
}

void Heap::bubbleDown() {
	int index = 0;
	int leftChildIndex = (2*index) + 1;
	int rightChildIndex = (2*index) + 2;
	while(true) {
		if (arr[leftChildIndex] != 0 && arr[index] > arr[leftChildIndex] && arr[leftChildIndex] < arr[rightChildIndex]) {
			int temp;
			temp = arr[index];
			arr[index] = arr[leftChildIndex];
			arr[leftChildIndex] = temp;
			index = leftChildIndex;
			leftChildIndex = (2*index) + 1;
			rightChildIndex = (2*index) + 2;
					
		}
		else if (arr[rightChildIndex] != 0 && arr[index] > arr[rightChildIndex]) {
			int temp;
			temp = arr[index];
			arr[index] = arr[rightChildIndex];
			arr[rightChildIndex] = temp;
			index = rightChildIndex;
			leftChildIndex = (2*index) + 1;
			rightChildIndex = (2*index) + 2;

		} else  {
			break;
		}
	}

}


int main() {
	// Tree tree;
	// tree.insert(10);
	// tree.insert(29);
	// tree.insert(30);
	// tree.insert(3);
	// tree.insert(69);
	// tree.insert(1);
	// tree.insert(4);
	// tree.print();
	//
	// int test = tree.search(29);
	// int test2 = tree.search(55);
	// int test3 = tree.search(1);
	// int test4 = tree.search(124214);
	//
	// //Should return 29
	// printf("Test 1: %d \n", test);
	// //Should return 0
	// printf("Test 2: %d \n", test2);
	// //Should return 1
	// printf("Test 3: %d \n", test3);
	// //Should return 0
	// printf("Test 4: %d \n", test4);
	//
	// LinkedList list;
	// list.add(24);
	// list.add(55);
	// list.add(66);
	// list.print();
	//
	// std::cout << "------"<< std::endl;
	// list.remove(55);
	// list.print();
	//
	// list.remove(66);
	//
	// std::cout << "------"<< std::endl;
	// list.print();
	//
	// list.remove(24);
	//
	// std::cout << "------"<< std::endl;
	// list.print();
	// list.add(555);
	// list.add(245);
	// list.add(122);
	// list.print();
	// std::cout << "------"<< std::endl;
	// list.remove(122);
	// list.remove(245);
	// list.remove(555);
	// list.print();
	Heap heap;
	heap.insert(10);
	heap.insert(11);
	heap.insert(12);
	heap.insert(1);
	heap.insert(24);
	heap.insert(23);
	heap.insert(5);
	heap.print();
	int x = heap.pop();
	heap.print();


	return 0;
}
