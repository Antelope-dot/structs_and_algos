#ifndef SCUFFED_BST_TREE
#define SCUFFED_BST_TREE

// BST -tree
struct Tree{
	struct Node *root = NULL;
	void insert(int item);
	void print();
	int search(int item);
};

struct Node{
	int value;
	struct Node *left = NULL;
	struct Node *right = NULL;
	void insert (int item);
	void print();
	bool search(int item, int *x);
};

#endif
