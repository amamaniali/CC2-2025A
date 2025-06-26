#include <iostream>
#include "Point.h"
#include "Vector.h"

using namespace std;

int main() {
    Point p1;
    Point p2(3,4);
    Vector vec(p1, p2);
    vec.print();
    cout << vec.modulo() << endl;
}
