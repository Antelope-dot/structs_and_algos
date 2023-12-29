#include <iostream>
#include "heap.h"
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


