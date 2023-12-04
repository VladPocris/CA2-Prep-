#ifndef NODE_H
#define NODE_H

#include "OrderLine.h" // Include OrderLine header

class Node {
	friend class LinkedList;
public:
	Node(OrderLine);
private:
	OrderLine theData; // see above
	Node* next;
};
typedef Node* ListNodePtr;
#endif