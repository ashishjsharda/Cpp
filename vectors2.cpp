#include <iostream>
#include <memory>
#include <vector>
/**
 * Using Vectors
 * @author ashish
 */

int main() {
   std::vector<int> g1;
   for(int i=0;i<5;i++)
   {
       g1.push_back(i);
   }

   for(auto i=g1.cbegin();i!=g1.cend();i++)
   {
       std::cout<<*i;
   }
   return 0;
}

