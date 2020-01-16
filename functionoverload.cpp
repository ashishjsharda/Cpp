/******************************************************************************

                Function Overloading
                @author asharda

*******************************************************************************/

#include <iostream>

using namespace std;
int operate(int a,int b)
{
    return a+b;
}

double operate(double a,double b)
{
    return a+b;
}
int main()
{
    
    cout<<operate(10,20);
    cout<<"\n"<<operate(10.40,50.20);
    return 0;
}
