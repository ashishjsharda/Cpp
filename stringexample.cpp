#include <iostream>
#include<string>

using namespace std;

int main()
{
    string str1="Hello";
    string str2="World";
    std::cout << str1 << std::endl;
    string str3=str1+str2;
    std::cout << str3 << std::endl;
    cout<<"Length of string 3 is "<<str3.size();
}
