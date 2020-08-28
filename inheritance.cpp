#include <iostream>

/**
 * Inheritance in C++
 * @author ashish
 */
class Shape {
public:
    int width, height;

    void setParams(int w, int h) {
        width = w;
        height = h;
    }

};

class Rectangle : public Shape {
public:
    int getArea() {
        return width * height;
    }
};

int main() {

    Rectangle rectangle;
    rectangle.setParams(10, 20);
    std::cout << "Area of rectangle is  " << rectangle.getArea();


}
