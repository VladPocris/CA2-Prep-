#include "LinkedList.h"
#include "Node.h"
#include "OrderLine.h" // Include OrderLine header
#include <iostream>
using namespace std;

LinkedList::LinkedList() {
    head = nullptr;
}

LinkedList::~LinkedList() {
    while (head != nullptr) {
        ListNodePtr tempptr = head;
        head = head->next;
        delete tempptr;
    }
}

void LinkedList::addNode(OrderLine theData) {
    ListNodePtr newNode = new Node(theData);
    ListNodePtr tempptr;

    if (!head) {
        head = newNode;
    }
    else {
        for (tempptr = head; tempptr->next != nullptr; tempptr = tempptr->next);
        tempptr->next = newNode;
    }
}

void LinkedList::displayList() {
    ListNodePtr tempptr = head;
    while (tempptr != nullptr) {
        cout << tempptr->theData.name << endl;
        tempptr = tempptr->next;
    }
}

void LinkedList::deleteNode(OrderLine toDelete) {
    if (head != nullptr) {
        ListNodePtr leadptr = head, tempptr = nullptr;
        if (head->theData.name == toDelete.name && head->theData.quantity == toDelete.quantity) {
            head = head->next;
            delete leadptr;
        }
        else {
            while (leadptr != nullptr && (leadptr->theData.name != toDelete.name || leadptr->theData.quantity != toDelete.quantity)) {
                tempptr = leadptr;
                leadptr = leadptr->next;
            }
            if (leadptr == nullptr) {
                return;
            }
            else {
                tempptr->next = leadptr->next;
                delete leadptr;
            }
        }
    }
}

void LinkedList::reverseList() {
    ListNodePtr curr = head, next = nullptr, prev = nullptr;
    while (curr != nullptr) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
}

LinkedList LinkedList::mergeLists(LinkedList list1, LinkedList list2) {
    LinkedList mergedList;

    // Add nodes from list1 to mergedList
    ListNodePtr tempPtr = list1.head;
    while (tempPtr != nullptr) {
        mergedList.addNode(tempPtr->theData);
        tempPtr = tempPtr->next;
    }

    // Add nodes from list2 to mergedList
    tempPtr = list2.head;
    while (tempPtr != nullptr) {
        mergedList.addNode(tempPtr->theData);
        tempPtr = tempPtr->next;
    }

    return mergedList;
}
























/*
LinkedList::LinkedList()
    :head(nullptr) //an empty list to start
{}

void LinkedList::displayList()
{
    ListNodePtr tempptr = head; //initial
    while (tempptr != nullptr) // guard
    {
        cout << tempptr->theData.name << endl;
        tempptr = tempptr->next; // make progress
    } //endwhile
}

void LinkedList::addNode(OrderLine theData) {
    ListNodePtr newNode = new Node(theData);
    ListNodePtr tempptr;
    if (!head) head = newNode;
    else {
        for (tempptr = head; tempptr->next != nullptr; tempptr = tempptr->next);
        tempptr->next = newNode;
    }
}

LinkedList::~LinkedList() {
    while (head != nullptr) {
        ListNodePtr tempptr = head;
        head = head->next;
        delete tempptr;
    }
}

void LinkedList::deleteNode(OrderLine toDelete) {
    if (head != nullptr) {
        ListNodePtr leadptr = head, trailptr = nullptr;

        if (head->theData.name == toDelete.name && head->theData.quantity == toDelete.quantity) {
            head = head->next;
            delete leadptr;
        }
        else {
            while (leadptr != nullptr && (leadptr->theData.name != toDelete.name || leadptr->theData.quantity != toDelete.quantity)) {
                trailptr = leadptr;
                leadptr = leadptr->next;
            }

            if (leadptr == nullptr)
                return;
            else {
                trailptr->next = leadptr->next;
                delete leadptr;
            }
        }
    }
}

void LinkedList::reverseList() {
    ListNodePtr currentPtr = head, nextPtr = nullptr, prevPtr = nullptr;
    if (head != nullptr) {
        while (currentPtr != nullptr) {
            nextPtr = currentPtr->next;
            currentPtr->next = prevPtr;
            prevPtr = currentPtr;
            currentPtr = nextPtr;
        }
        head = prevPtr;
    }
}
*/
