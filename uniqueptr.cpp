#include <iostream>
#include <memory>
/**
 * Using Unique Pointers
 * @author ashish
 */

int main() {
    std::unique_ptr<int>p(new int{123});
    std::cout<<*p;
   return 0;
}

