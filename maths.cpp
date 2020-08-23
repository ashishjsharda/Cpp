#include <iostream>

int add(int a,int b)
{
    return a+b;
}

int mul(int a,int b)
{
    return a*b;
}
int main() {
    std::cout << "Hello, World!" << std::endl;
    std::cout<<"Testing"<<"\n";
    std::cout<<"Addition is "<<add(10,20)<<std::endl;
    std::cout<<"Multiplication is "<<mul(30,40)<<std::endl;
}
