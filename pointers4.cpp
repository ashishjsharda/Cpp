
#include <iostream>

using namespace std;
void increment(int *numbers)
{
    for(int i=0;i<3;i++,numbers++){
        std::cout << *numbers << std::endl;
        
    }
}
int main()
{
    int numbers[]={10,20,30};
    increment(numbers);
    return 0;
}
