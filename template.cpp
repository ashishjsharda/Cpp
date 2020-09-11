#include <iostream>

template<typename T>
inline T Max(T a,T b){
    return a>b?a:b;
}
int main() {
    std::cout << "Hello, World!" << std::endl;
    std::cout<<Max(10,20)<<std::endl;
    std::cout<<Max(10.5,5.5)<<std::endl;
    return 0;
}
