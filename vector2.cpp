#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers;
    numbers.push_back(10);
    numbers.push_back(5);
    numbers.push_back(20);
    numbers.push_back(15);
    numbers.push_back(0);
    std::cout << "Original vector: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    std::sort(numbers.begin(), numbers.end());
    std::cout << "Sorted vector: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    return 0;
}
