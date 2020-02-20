/******************************************************************************

                         Using Arrays with Pointers
                         @author asharda

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    double arr[5]={1.0,2.0,8.0,5.0,9.0};
    double *ptr;
    ptr=arr;
    int length=sizeof(arr)/sizeof(*arr);
    for(int i=0;i<length;i++)
    {
        std::cout << arr[i] << std::endl;
    }
    return 0;
}
