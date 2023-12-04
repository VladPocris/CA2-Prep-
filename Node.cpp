#include "Node.h"

Node::Node(OrderLine newOrder) {
	theData = newOrder;
	next = nullptr;
}