//
//  DynamicArray.hpp
//  dynamic_array
//
//  Created by Nick Rogers on 2/5/23.
//

#ifndef DynamicArray_h
#define DynamicArray_h

#include <stdio.h>
#include <iostream>

template <class T>
class DynamicArray {
public:
    
    DynamicArray() {
        capacity = 1;
        size = 0;
        array = new T[capacity];
    }
    
    ~DynamicArray() {
        delete [] array;
    }
    
    size_t getLength() const {
        return this->size;
    }
    
    size_t getCapacity() const {
        return this->capacity;
    }
    
    T getValueAtIndex(size_t index) {
        if (index > size)
            return T();
        
        return array[index];
    }
    
    void push(T x) {
        
        if (size == capacity) {
            growArray();
        }
        
        array[size] = x;
        size++;
    }
    
    T pop() {
        T item = array[size];
        
        size--;
        
        return item;
    }
    
    T & operator[] (const int index);
    
protected:
    
    void growArray() {
        // Create a new array of double the size.
        T *tmp = new T[capacity * 2];
        
        capacity = capacity * 2;
        
        for (int i = 0; i < size; i++) {
            tmp[i] = array[i];
        }
        
        delete [] array;
        array = tmp;
    }
    
//    void shrinkArray();
    
private:
    T           *array;
    size_t      capacity;
    size_t      size;
};

template <class T>
inline T& DynamicArray<T>::operator[] (const int index) {
    return array[index];
}

template <class T>
std::ostream & operator << (std::ostream & os, DynamicArray<T> *array) {
    
    for (int i = 0; i < array->getLength(); i++) {
        T element = array->pop();
        os << element << std::endl;
    }
    
    return os;
}

#endif /* DynamicArray_h */
