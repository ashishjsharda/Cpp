#include <iostream>
/**
 * Arrays in C++
 * @author ashish
 */

int main() {
    std::cout << "Hello, World!" << std::endl;
    std::cout<<"Testing"<<"\n";
    int arr[3]={10,20,30};
    for(int i=0;i<sizeof(arr)/sizeof(*arr);i++){
        std::cout<<"Array Element seen is " <<arr[i];
    }
}
