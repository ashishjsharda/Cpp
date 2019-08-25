/******************************************************************************

                              Classes in C++
                              @author asharda

*******************************************************************************/

#include <iostream>

using namespace std;

class Box
{
  public:
  int length;
  int width;
  int height;
  
  int volume()
  {
      return length*width*height;
  }
  
};
int main()
{
    Box b1;
    b1.length=10;
    b1.width=20;
    b1.height=30;
    cout<<"Volume seen is "<<b1.volume();
    return 0;
}
