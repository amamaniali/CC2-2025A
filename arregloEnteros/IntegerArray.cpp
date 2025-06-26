#include <iostream>
#include "IntegerArray.h"

IntegerArray::IntegerArray() {
    this->size = 0;
    this->data = new int[0];
}

IntegerArray::IntegerArray(int arr[], int size) {
    this->size = size;
    this->data = new int[size];
    for(int i = 0; i < size; i++)
        this->data[i] = arr[i];
}

IntegerArray::IntegerArray(const IntegerArray &o) {
    this->size = o.size;
    this->data = new int[size];
    for(int i = 0; i < o.size; i++)
        this->data[i] = o.data[i];
}

IntegerArray::~IntegerArray() {
    delete[] data;
}

void IntegerArray::print() const {
    std::cout << "[ ";
    for(int i = 0; i < size; i++)
        std::cout << data[i] << " ";
    std::cout << "]" << std::endl;
}

int IntegerArray::getSize() const {
    return size;
}

void IntegerArray::push_back(int val) {
    int *tmp = new int[size+1];
    for(int i = 0; i < size; i++)
        tmp[i] = data[i];
    tmp[size] = val;
    size = size + 1;
    delete[] data;
    data = tmp;
}



