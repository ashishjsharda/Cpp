/******************************************************************************

                              Using Pure Virtual Functions
                               @author asharda

*******************************************************************************/

#include <iostream>

using namespace std;
class Shape {
   protected:
      int width, height;
      
   public:
      Shape( int a = 0, int b = 0){
         width = a;
         height = b;
      }
      virtual int area()=0;
};
class Rectangle: public Shape {
   public:
      Rectangle( int a = 0, int b = 0):Shape(a, b) { }
      
      int area () { 
         cout << "Rectangle class area :" <<endl;
         return (width * height); 
      }
};

class Triangle: public Shape {
   public:
      Triangle( int a = 0, int b = 0):Shape(a, b) { }
      
      int area () { 
         cout << "Triangle class area :" <<endl;
         return (width * height / 2); 
      }
};


int main()
{
    Shape *shape;
    Rectangle rect(10,20);
    Triangle tri(20,30);
    shape=&rect;
    cout<<shape->area();
    return 0;
}
