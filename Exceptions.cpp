#include <iostream>

/**
 * Divide by Zero and Catch Exceptions
 * @param num
 * @param den
 * @return double
 */
double divide(double num,double den){
    if (den==0){
        throw std::invalid_argument("Divide by zero");
    }
    return num/den;
}
int main() {
    try {
        std::cout<<divide(10,2)<<std::endl;
        std::cout<<divide(10,3)<<std::endl;
        std::cout<<divide(10,0)<<std::endl;
    } catch (const std::invalid_argument invalid_argument) {
        std::cout<<"Caught Exception "<<invalid_argument.what()<<std::endl;

    }
    return 0;
}

