//
//  LinkedList.hpp
//  linked_list
//
//  Created by Nick Rogers on 2/4/23.
//

#ifndef LinkedList_hpp
#define LinkedList_hpp

#include <stdio.h>
#include <iostream>
#include "Node.hpp"

class LinkedList {

public:
    
    LinkedList(Node * head);
    ~LinkedList();
    
    void printList();
    void pushNode(Node * node);
    
    int length() const;
    
private:
    
    Node    *head;
};

#endif /* LinkedList_hpp */
