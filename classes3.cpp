/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

class Adder
{
    private:
    int total;
    public:
    int i;
    Adder(int i)
    {
        this->i=i;
        
    }
     int getTotal()
    {
        total=total+i;
        return total;
    }
    
    
};
int main()
{
    Adder a1(10);
    cout<<a1.getTotal();
    
}
