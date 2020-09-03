#include <iostream>

/**
 * Pointers part 2
 * @author ashish
 */

int main() {
    int var=20;
    int *ptr;
    ptr=&var;
    std::cout<<" Address of var is "<<&var<<std::endl;
    std::cout<<"Value of var is " << *ptr;

}
