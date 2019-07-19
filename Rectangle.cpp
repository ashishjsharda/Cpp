/******************************************************************************

                              Compute Area of Rectangle 
                                @author asharda


*******************************************************************************/

#include <iostream>

using namespace std;

class Rectangle
{
    public:
    int width;
    int height;
    
    Rectangle(int width,int height)
    {
        this->width=width;
        this->height=height;
    }
    //Print Area of Rectangle
    int area()
    {
        return width*height;
    }
};
int main()
{
    Rectangle rect(10,20);
    cout<<"Area seen is "<<rect.area();

    
}
