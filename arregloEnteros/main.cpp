#include <iostream>
#include "IntegerArray.h"

using namespace std;

int main() {
    IntegerArray ia1;
    cout << ia1.getSize() << endl;
    ia1.print();

    int array[] = {1,2,3,4,5};
    IntegerArray ia2(array, 5); 
    cout << ia2.getSize() << endl;
    ia2.print();

    if(true)
        IntegerArray ia3 = ia2;

    ia2.print();
    ia2.push_back(10);
    ia2.print();
}
