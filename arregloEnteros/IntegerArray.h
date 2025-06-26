#ifndef INTEGERARRAY_H
#define INTEGERARRAY_H

class IntegerArray {
        int size;
        int *data;
    public:
        IntegerArray();
        IntegerArray(int arr[], int size);
        IntegerArray(const IntegerArray &o);
        ~IntegerArray();
        int getSize() const;
        void print() const;
        void push_back(int val);
};

#endif
