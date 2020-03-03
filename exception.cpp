
#include <iostream>

using namespace std;

double division(int a,int b)
{
    if(b==0)
    {
        throw "Divide by zero error";
    }
    return (a/b);
}
int main()
{
    int x=50;
    int y=0;
    double z=0;
    try
    {
        division(x,y);
    }catch(const char *msg)
    {
        cerr<<msg<<endl;
    }

    return 0;
}
