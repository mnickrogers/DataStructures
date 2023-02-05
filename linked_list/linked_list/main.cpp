//
//  main.cpp
//  linked_list
//
//  Created by Nick Rogers on 2/4/23.
//

#include <iostream>
#include "LinkedList.hpp"

int main(int argc, const char * argv[]) {
    
    int *a = new int(0);
    int *b = new int(1);
    int *c = new int(2);
    int *d = new int(3);
    
    Node *nA = new Node(a);
    Node *nB = new Node(b);
    Node *nC = new Node(c);
    Node *nD = new Node(d);
    
    LinkedList * list = new LinkedList();
    
    delete list;
    
    return 0;
}
