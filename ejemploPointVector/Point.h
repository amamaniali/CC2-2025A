#ifndef POINT_H
#define POINT_H

class Point {
    private:
        double x, y;
    public:
        Point(double x=0, double y=0): x{x}, y{y}{}

        double getX() const {
            return this->x;
        }
        double getY() const {
            return this->y;
        }
        void setX(int x) {
            this-> x = x;
        }
        void setY(int y) {
            this-> y = y;
        }
        void print() const {
          std::cout << "(" << x << "," << y << ")";
        }

};

#endif
