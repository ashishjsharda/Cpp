#include <iostream>
#include<cstring>
using namespace std;

int main()
{
    string str="Sai";
    cout<<"Size of string is "<<str.size();
    char src[10]="Sai";
    char target[10];
    strcpy(target,src);
    cout<<endl<<target<<endl;
    strcat(target,src);
    cout<<target;
   
}
