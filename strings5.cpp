#include <iostream>

/**
 * String Operations 
 * @author ashish
 */

int main() {
   std::string s1 ="John";
   std::string s2 ="Ryan";
   std::string  s3;
   s3=s1+s2;
   std::cout<<" After Concatenation" <<s3 <<"\n";
   std::string s4;
   s4=s1;
   std::cout<<"Value after copy is "<<s4 <<"\n";
   std::cout<<"Size of string is "<<s3.size();
   return 0;
}

