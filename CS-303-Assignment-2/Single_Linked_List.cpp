#include "Single_Linked_List.h"
#include <iostream>

Single_Linked_List::Single_Linked_List()
{
    head = nullptr;
    tail = nullptr;
    num_items = 0;
}

bool Single_Linked_List::IsEmpty()
{
    return (head == nullptr);
}

void Single_Linked_List::push_front(int data)
{
	Node* newNode = new Node();
	newNode->data = data;

	if (IsEmpty()) {
		newNode->next = nullptr;
		head = newNode;
		std::cout << "linkelist is empty the first item." << data << " " << "is added" << std::endl;
	}
	else {
		newNode->next = head;
		head = newNode;

		std::cout << "Adding " << data << " " << "to the beginning of the list." << std::endl;
	}
	num_items++;

}

void Single_Linked_List::push_back(int data)
{
	Node* newNode = new Node();
	newNode->data = data;
	newNode->next = nullptr;
	if (IsEmpty()) {

		head = tail = newNode;
		std::cout << "linkelist is empty list push_back invoked first time." << data << " " << "is the first element" << std::endl;
	}
	else
	{
		tail->next = newNode;
		tail = newNode;
		std::cout << "Push back " << data << " " << "to the end of the list" << std::endl;
	}
	num_items++;
}

void Single_Linked_List::pop_front()
{
	if (IsEmpty()) {
		return;
	}
	Node* temp = head;
	head = head->next;
	delete temp;
	num_items--;
	if (num_items == 0) {
		tail = nullptr;
	}
}

void Single_Linked_List::pop_back()
{
	if (IsEmpty()) {
		return;
	}
	if (num_items == 1) {
		delete tail;
		head = nullptr;
		tail = nullptr;
		num_items = 0;
		return;
	}
	Node* temp = head;
	while (temp->next != tail) {
		temp = temp->next;
	}
	delete tail;
	tail = temp;
	tail->next = nullptr;
	num_items--;
}

int Single_Linked_List::front()
{
	if (IsEmpty()) {
		std::cout << "Error: list is empty." << std::endl;
		return -1;
	}
	else {
		return head->data;
	}
}

int Single_Linked_List::back()
{
	if (IsEmpty()) {
		throw std::out_of_range("List is empty");
	}
	return tail->data;
}

void Single_Linked_List::insert(size_t index, const int& item)
{
	if (index == 0) {
		push_front(item);
		return;
	}
	Node* current = head;
	for (size_t i = 0; i < index - 1 && current != nullptr; i++) {
		current = current->next;
	}
	if (current == nullptr) {
		push_back(item);
		return;
	}
	Node* new_node = new Node();
	new_node->next = current->next;
	current->next = new_node;
	num_items++;
}

bool Single_Linked_List::remove(size_t index)
{
	if (index >= num_items) {
		std::cout << "Index is beyond the end of the list" << std::endl;
		return false;
	}
	if (index == 0) {
		pop_front();
		return true;
	}
	if (index == num_items - 1) {

		pop_back();
		return true;
	}
	Node* temp = head;
	for (size_t i = 0; i < index - 1; i++) {
		temp = temp->next;
	}
	Node* node_to_remove = temp->next;
	temp->next = node_to_remove->next;
	delete node_to_remove;
	num_items--;
	std::cout << "Item at index" << index << "has been removed successfuly.";

	return true;
}

size_t Single_Linked_List::find(const int& item)
{
	Node* temp = head;
	size_t index = 0;
	while (temp != nullptr) {
		if (temp->data == item) {
			std::cout << "The position of " << " " << item << " first occurred at index" << " " << index << std::endl;
			return index;
		}
		temp = temp->next;
		index++;
	}
	std::cout << "size of the list is " << num_items << std::endl;
	return num_items;
}

void Single_Linked_List::display()
{
	Node* temp = head;
	if (temp == nullptr) std::cout << "This is empty linkedlist." << std::endl;

	while (temp != nullptr)
	{
		std::cout << temp->data << std::endl;
		temp = temp->next;
	}
}
