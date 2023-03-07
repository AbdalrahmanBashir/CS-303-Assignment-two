#include<iostream>

#include"Single_Linked_List.h"


using namespace std;

int main() {

	// Create an empty list
	
	Single_Linked_List list;
	list.display();  // linkedlist is empty.
	//Add items to the list at the fron and the end.
	list.push_back(600);
	list.push_front(500);
	list.push_front(400);
	list.push_back(700);
	list.push_back(500);
	std::cout << std::endl;
	std::cout << "New list after adding to the front and end: " << std::endl;
	list.display();
	list.find(500);
	list.find(4);
	list.remove(1);
	std::cout << "New list after removing some items: " << std::endl;
	list.display();
	




}