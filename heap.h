#ifndef SCUFFED_HEAP
#define SCUFFED_HEAP


struct Heap {
	int arr[10] = {0};	
	int amountOfNodes = 0;
	void bubble(int currentIndex);
	void bubbleDown();
	void insert(int item);
	int pop();
	void print();
};

#endif
