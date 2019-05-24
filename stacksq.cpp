/******************************************************************************

 Stack in C++
 @author asharda

 *******************************************************************************/

#include <iostream>
#include<stack>
using namespace std;

        int main()
        {
        stack<int> st;
        st.push(10);
        st.push(20);
        st.push(30);
        cout<<"Contents of stack are"<<"\n";
        while(!st.empty())
        {
        cout<<"\n" <<st.top();
        st.pop();
        }
        return 0;
        }
