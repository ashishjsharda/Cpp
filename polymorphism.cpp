#include <iostream>

class Shape{

protected:
    int param1,param2;
public :
    Shape(int num1,int num2){
        param1=num1;
        param2=num2;

}

virtual int area()
{
    return 0;
}

};

class Rectangle: public Shape{

public:
    Rectangle(int num1, int num2) : Shape(num1, num2) {

    }

    int area()
    {
        return param1*param2;
    }
};

class Triangle: public Shape{

public:
    Triangle(int num1, int num2) : Shape(num1, num2) {

    }

    int area()
    {
        return (param1*param2)/2;
    }
};
int main() {
   Shape *shape;
   Rectangle rectangle(10, 20);
   Triangle triangle(30, 40);
   shape=&rectangle;
   std::cout<< "Area of rectangle is "<<shape->area()<<std::endl;
   shape=&triangle;
   std::cout<< "Area of triangle is "<<shape->area();

}
