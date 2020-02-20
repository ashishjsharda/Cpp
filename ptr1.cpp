/******************************************************************************

                         Using  Pointers
                         @author asharda

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int val=20;
    int *ptr;
    ptr=&val;
    std::cout << *ptr << std::endl;
    return 0;
}
