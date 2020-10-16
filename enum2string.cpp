#include <iostream>

/**
 * Enum to String
 * @author ashish
 */

enum Color{red,blue,green};
std::string enum_to_string(Color type)
{
    switch (type) {
        case red:
            return "Red Color";
            break;
        case blue:
            return "Blue Color";
            break;
        case green:
            return "Green Color";
            break;

    }
}
int main() {
    std::cout<<"Color seen is "<<red;
    std::cout<<enum_to_string(red)<<std::endl;
    std::cout<<enum_to_string(blue)<<std::endl;
    std::cout<<enum_to_string(green)<<std::endl;
    return 0;
}

