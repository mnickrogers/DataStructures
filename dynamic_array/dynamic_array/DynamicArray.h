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
    
    T popBack() {
        T item = array[size];
        
        size--;
        
        return item;
    }
    
    T popFront() {
        T element = array[0];
        
        for (int i = 1; i < size; i++)
            array[i-1] = array[i];
        
        size--;
        
        return element;
    }
    
    T & operator[] (size_t index);
    T & operator[] (size_t index) const;
    
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
T& DynamicArray<T>::operator[] (size_t index) {
    return array[index];
}

template <class T>
T& DynamicArray<T>::operator[] (size_t index) const {
    return array[index];
}

template <class T>
std::ostream & operator << (std::ostream & os, DynamicArray<T> *array) {
    
    for (int i = 0; i < array->getLength(); i++) {
        T element = array->popFront();
        os << element << " ";
    }
    
    return os;
}

#endif /* DynamicArray_h */
