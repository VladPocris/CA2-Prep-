#pragma once
#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"

class LinkedList
{
public:
	LinkedList();
	~LinkedList();
	void addNode(OrderLine);
	void deleteNode(OrderLine);
	void displayList();
	void reverseList();
private:
	ListNodePtr head;
};

#endif