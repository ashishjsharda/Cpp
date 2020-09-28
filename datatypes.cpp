#include <iostream>
#include <type_traits>

struct Point{
    float x;
    float y;

};
int main() {

    std::cout<<std::is_fundamental_v<Point><<std::endl;
    std::cout<<std::is_fundamental_v<int><<std::endl;
    std::cout<<std::is_compound_v<Point><<std::endl;
    std::cout<<std::is_fundamental_v<float><<std::endl;
    return 0;
}

