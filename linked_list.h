#ifndef SCUFFED_LINKED_LIST
#define SCUFFED_LINKED_LIST


struct LinkedList{
	struct NodeLink* head = NULL;
	void add(int value);
	void remove(int item);
	void print();
};

struct NodeLink{
	int value{};
	struct NodeLink* next = NULL;
	void add(int value);
	void remove(int item, NodeLink *prev, NodeLink *current);
	void print();
};

#endif
