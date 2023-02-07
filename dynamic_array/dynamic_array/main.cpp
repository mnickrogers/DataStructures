//
//  main.cpp
//  dynamic_array
//
//  Created by Nick Rogers on 2/5/23.
//

#include <iostream>
#include "DynamicArray.h"

int main(int argc, const char * argv[]) {
    
    DynamicArray<int> *dArray = new DynamicArray<int>();
    
    dArray->push(0);
    dArray->push(1);
    dArray->push(2);
    
    int i = (*dArray)[0];
    
    std::cout << dArray << std::endl;
    
    delete dArray;
    
    return 0;
}
