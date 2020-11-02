#include <iostream>
#include <vector>
/**
 * Using Vectors
 * @author ashish
 */

int main() {
    int arr[]={10,4,8,12};
    std::vector<int> v;
    for (int i=1;i<=10;i++){
        v.push_back(i);
    }
    for (auto j= v.begin(); j != v.end(); j++) {
        std::cout<<*j<<"\n";
    }
    return 0;
}

