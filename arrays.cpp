/******************************************************************************

                              Arrays in C++
                              @author asharda

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    double a[]={1.0,2.0,3.0};
    for(int i=0;i<sizeof(a)/sizeof(*a);i++)
    {
        cout<<endl<<a[i];
    }
    return 0;
}
