#pragma once
#include "Node.h"
class Single_Linked_List
{
public:
	Node* head;
	Node* tail;
	size_t  num_items;
	Single_Linked_List();
	bool IsEmpty();
	void push_front(int data);
	void push_back(int data);
	void pop_front();
	void pop_back();
	int front();
	int back();
	void insert(size_t index, const int& item);
	bool remove(size_t index);
	size_t find(const int& item);
	void display();
};

