#include <iostream>
/**
 * String in C++
 * @author ashish
 */

int main() {

    char greeting[3]={'H','i','\0'};
    std::cout<<"Greeting " <<greeting<<" \n";
    char greeting1[3];
    strcpy_s(greeting1,greeting);
    std::cout<<"Greeting copied " <<greeting1<<" \n";
    std::cout<<"Length of string is " <<strlen(greeting1)<<" \n";
    std::string str1="Hello";
    std::string str2="World";
    std::string str3=str1+str2;
    std::cout<<" Concatenated String is " <<str3;
}
