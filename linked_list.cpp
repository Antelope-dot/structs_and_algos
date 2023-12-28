#include <iostream>
#include "linked_list.h"

void LinkedList::remove(int item){
	if (head) {
		if (head -> value == item) {
			if (head -> next) {
				head = head -> next;
			} else {
				delete head;
				head = NULL;
			}
		} else {
			head -> next -> remove(item, head, head -> next);
		}
	}
}

void NodeLink::remove(int item, NodeLink *prev, NodeLink *current) {

	if (value == item) {
		if (next) {
			prev -> next = next;
			delete current;
		} else {
			delete prev -> next;
			prev -> next = NULL;
		}
	} else {
		next -> remove(item, current, next);
	}
}

void LinkedList::add(int value){
	if(head) {
		head -> add(value);
	} else {
		head = new NodeLink({value});
	}
}

void NodeLink::add(int value) {
	if(next) {
		next -> add(value);
	} else {
		next = new NodeLink({value});
	}
}

void LinkedList::print() {
	if(head) {
		head -> print();
	}
}

void NodeLink::print() {
	printf("%d \n", value);
	if (next) {
		next -> print();
	}
}
