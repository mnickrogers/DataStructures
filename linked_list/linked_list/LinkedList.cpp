//
//  LinkedList.cpp
//  linked_list
//
//  Created by Nick Rogers on 2/4/23.
//

#include "LinkedList.hpp"

LinkedList::LinkedList() {}

LinkedList::~LinkedList() {
    Node * nextPtr = this->head;
    while (nextPtr != nullptr) {
        Node * newPtr = nextPtr->getNextNode();
        delete nextPtr;
        nextPtr = newPtr;
    }
}

void LinkedList::printList() {
    Node * nextPtr = this->head;
    while (nextPtr != nullptr) {
        std::cout << nextPtr->getData() << std::endl;
        nextPtr = nextPtr->getNextNode();
    }
}
