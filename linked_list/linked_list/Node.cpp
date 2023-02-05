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

Node * Node::getNextNode() const {
    return this->next;
}

NodeData * Node::getData() const {
    return this->data;
}

const void Node::addNextNode(Node *next) {
    this->next = next;
}
