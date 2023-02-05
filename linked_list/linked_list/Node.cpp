//
//  Node.cpp
//  linked_list
//
//  Created by Nick Rogers on 2/4/23.
//

#include "Node.hpp"

Node::Node(NodeData * data) {
    this->data = data;
    this->next = nullptr;
}

Node::~Node() {
    delete this->data;
}

Node * Node::getNextNode() {
    return this->next;
}

NodeData * Node::getData() {
    return this->data;
}
