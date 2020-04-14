
#include <iostream>

using namespace std;

double divison(int a,int b)
{
    if(b==0)
    {
        throw "Divide by zero error";
    }
    return (a/b);
}
int main()
{
    try
    {
        cout<<divison(10,0);
    }
    catch(const char *msg)
    {
        cerr<<msg<<endl;
    }
}
