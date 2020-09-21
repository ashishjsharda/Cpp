#include <iostream>

/**
 * Example using Lambda
 * @param x
 */

void usingLambda(int x){

    auto c1=[x](int y){return x*y;};
    std::cout<<c1(20);
}
int main() {
    usingLambda(20);

}
