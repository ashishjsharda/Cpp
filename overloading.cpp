/******************************************************************************

                              Overloading 
                            @author asharda

*******************************************************************************/

#include <iostream>

using namespace std;

class overloading
{
    public:
    void print(int i)
    {
        cout<<i;
    }
    void print(float f)
    {
        cout<<"\n"<<f;
    }
};
int main()
{
  overloading o;
  o.print(10);
  o.print(20.87f);
}
