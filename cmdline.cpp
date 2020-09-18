#include <iostream>

/**
 * Enter input via cmd and print
 */
int main() {
    std::cout<<"Enter your name";
    char input[80];
    std::cin>>input;
    std::cout<<"Name entered is "<<input;
}
