/******************************************************************************

                              Using Stl Lists
                             @author asharda

*******************************************************************************/

#include <iostream>
#include<list> 
using namespace std;

int main()
{
    list<int> mylist{1,2,3};
    list<int>::iterator it;
    cout<<"Contents of List are";
    for(it=mylist.begin();it!=mylist.end();++it)
    {
        cout<<"\n"<<*it;
    }
    return 0;
}
