#ifndef VECTOR_H
#define VECTOR_H

#include <iostream>
#include <cmath>

class Vector {
    private:
        Point start;
        Point end;
    public:
        Vector(Point start, Point end) :start{start}, end{end}{}

        void print() const {
            start.print();
            std::cout << " -> ";
            end.print();
            std::cout << std::endl;
        }

        double modulo() const {
            return sqrt(pow(end.getX()-start.getX(), 2) + pow(end.getY()-start.getY(), 2) );
        }
};

#endif
