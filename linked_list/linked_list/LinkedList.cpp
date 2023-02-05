//
//  LinkedList.cpp
//  linked_list
//
//  Created by Nick Rogers on 2/4/23.
//

#include "LinkedList.hpp"

LinkedList::LinkedList(Node * head) {
    this->head = head;
}

LinkedList::~LinkedList() {
    Node *nextPtr = this->head;
    while (nextPtr != nullptr) {
        Node *newPtr = nextPtr->getNextNode();
        delete nextPtr;
        nextPtr = newPtr;
    }
}

void LinkedList::printList() {
    Node *nextPtr = this->head;
    while (nextPtr != nullptr) {
        std::cout << *nextPtr->getData() << "->";
        nextPtr = nextPtr->getNextNode();
    }
    std::cout << "END" << std::endl;
}

void LinkedList::pushNode(Node * node) {
    Node *nextPtr = this->head;
    while (nextPtr->getNextNode() != nullptr) {
        nextPtr = nextPtr->getNextNode();
    }
    nextPtr->addNextNode(node);
}

int LinkedList::length() const {
    if (this->head == nullptr)
        return 0;
    
    int length = 0;
    
    Node *nextPtr = this->head;
    while (nextPtr != nullptr) {
        length++;
        nextPtr = nextPtr->getNextNode();
    }
    
    return length;
}
