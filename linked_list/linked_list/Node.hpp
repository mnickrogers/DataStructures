//
//  Node.hpp
//  linked_list
//
//  Created by Nick Rogers on 2/4/23.
//

#ifndef Node_hpp
#define Node_hpp

#include <stdio.h>

typedef int NodeData;

class Node {

public:
    
    Node(NodeData * data);
    
    ~Node();
    
    Node * getNextNode() const;
    
    NodeData * getData() const;
    
    const void addNextNode(Node * next);
    
private:
    
    NodeData        *data;
    Node            *next;
};

#endif /* Node_hpp */
