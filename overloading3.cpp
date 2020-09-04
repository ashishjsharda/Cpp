#include <iostream>

/**
 * Function Overloading 
 * @author ashish
 */

class Test{
public:
    void print(){
        std::cout<<"This is in test"<<std::endl;
    }
    void print(int a){
        std::cout<<"Value of a is "<<a<<std::endl;
    }
    void print(double a){
        std::cout<<"Value of a is "<<a<<std::endl;
    }

};
int main() {
   Test test;
   test.print();
   test.print(10);
   test.print(20.0);
}
